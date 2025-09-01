#include <iostream>
using namespace std;

void printArray(int arr[], int n, int step = -1) {
    if (step != -1)
        cout << "Step " << step << ": ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSortAscending(int arr[], int n) {
    cout << "\n--- Bubble Sort Ascending ---\n";
    for (int i = 0; i < n - 1; i++) {
        cout << "Pass " << i + 1 << ":\n";
        for (int j = 0; j < n - i - 1; j++) {
            // Tampilkan sebelum tukar
            cout << "  Comparing " << arr[j] << " and " << arr[j + 1];
            if (arr[j] > arr[j + 1]) {
                cout << " => Swapping\n";
                swap(arr[j], arr[j + 1]);
            } else {
                cout << " => No Swap\n";
            }
            printArray(arr, n);
        }
    }
}

void bubbleSortDescending(int arr[], int n) {
    cout << "\n--- Bubble Sort Descending ---\n";
    for (int i = 0; i < n - 1; i++) {
        cout << "Pass " << i + 1 << ":\n";
        for (int j = 0; j < n - i - 1; j++) {
            // Tampilkan sebelum tukar
            cout << "  Comparing " << arr[j] << " and " << arr[j + 1];
            if (arr[j] < arr[j + 1]) {
                cout << " => Swapping\n";
                swap(arr[j], arr[j + 1]);
            } else {
                cout << " => No Swap\n";
            }
            printArray(arr, n);
        }
    }
}

int main() {
    int data[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(data) / sizeof(data[0]);

    // Buat salinan array manual
    int ascData[n], descData[n];
    for (int i = 0; i < n; i++) {
        ascData[i] = data[i];
        descData[i] = data[i];
    }

    // Proses Bubble Sort Ascending
    bubbleSortAscending(ascData, n);
    cout << "\nFinal Ascending order: ";
    printArray(ascData, n);

    // Proses Bubble Sort Descending
    bubbleSortDescending(descData, n);
    cout << "\nFinal Descending order: ";
    printArray(descData, n);

    return 0;
}
