#include <iostream>
#include <ctime>
#include <vector>
#include <algorithm>

using namespace std;

void Merge(vector<int>& s, int low, int mid, int high) {
    int i = low;
    int j = mid + 1;
    int k = low;
    vector<int> u(s);

    while (i <= mid && j <= high) {
        if (s.at(i) < s.at(j)) {
            u.at(k) = s.at(i);
            i++;
        } else {
            u.at(k) = s.at(j);
            j++;
        }
        k++;
    }
    if (i > mid) {
        for (int a = j; a < high + 1; a++) {
            u.at(k) = s.at(a);
            k++;
        }
    } else {
        for (int a = i; a < mid + 1; a++) {
            u.at(k) = s.at(a);
            k++;
        }
    }
    for (int a = low; a < high + 1; a++)
        s.at(a) = u.at(a);
}

void MergeSort(vector<int>& s, int low, int high) {
    int mid;
    if (low < high) {
        mid = (low + high) / 2;
        MergeSort(s, low, mid);
        MergeSort(s, mid + 1, high);
        Merge(s, low, mid, high);
    }
}

void swap(int& a, int& b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void Partition(vector<int>& s, int low, int high, int& pvpoint) {
    int j;
    int pvitem;

    pvitem = s.at(low);
    j = low;
    for (int i = low + 1; i <= high; i++) {
        if (s.at(i) < pvitem) {
            j++;
            swap(s.at(i), s.at(j));
        }
        pvpoint = j;
        swap(s.at(low), s.at(pvpoint));
    }
}

void QuickSort(vector<int>& s, int low, int high) {
    int pvpoint;
    if (high > low) {
        Partition(s, low, high, pvpoint);
        QuickSort(s, low, pvpoint - 1);
        QuickSort(s, pvpoint + 1, high);
    }
}

int main() {
    vector<int> CaseSize(20);

    for (int i = 0; i < 10; i++) { //10 Arrays those are sorted
        CaseSize.at(i) += (i + 1) * 1000;
    }

    for (int i = 10; i < 20; i++) { //rest 10 those are not sorted
        CaseSize.at(i) += (i + 1) * 9000;
    }

    cout << "------------------Sorted------------------\n\n";
    cout << "      Quick Sort       Merge Sort\n";
    for (int i = 0; i < 10; i++) {
        vector<int> Arr(CaseSize.at(i));
        Arr.front() = rand() % Arr.size();
        for (int j = 1; j < Arr.size(); j++) {
            Arr.at(j) = ((17 * Arr.at(j - 1) + 43) % (Arr.size() * 5));
        }
        vector<int> Arr2(Arr);

        sort(Arr.begin(), Arr.end());
        sort(Arr2.begin(), Arr2.end());

        cout << "N : " << CaseSize.at(i) << "    ";
        clock_t start = (int)clock();
        QuickSort(Arr, 0, Arr.size() - 1);
        printf("%0.5fms", (float)(clock() - start) / CLOCKS_PER_SEC);
        cout << "\t\t";

        clock_t start2 = (int)clock();
        MergeSort(Arr2, 0, Arr2.size() - 1);
        printf("%0.5fms", (float)(clock() - start) / CLOCKS_PER_SEC);
        cout << endl;
    }
    cout << endl;
    cout << "------------------Random------------------\n\n";
    cout << "        Quick Sort     Merge Sort\n";
    for (int k = 10; k < 20; k++) {
        vector<int> Arr(CaseSize.at(k));
        Arr.front() = rand() % Arr.size();
        for (int l = 1; l < Arr.size(); l++) {
            Arr.at(l) = ((17 * Arr.at(l - 1) + 43) % (Arr.size() * 5));
        }
        vector<int> Arr2(Arr);

        cout << "N : " << CaseSize.at(k) << "    ";

        clock_t start = (int)clock();
        QuickSort(Arr, 0, Arr.size() - 1);
        printf("%0.5fms", (float)(clock() - start) / CLOCKS_PER_SEC);

        cout << "\t\t";

        clock_t start2 = (int)clock();
        MergeSort(Arr2, 0, Arr2.size() - 1);
        printf("%0.5fms", (float)(clock() - start) / CLOCKS_PER_SEC);
        cout << endl;
    }
    return 0;
}