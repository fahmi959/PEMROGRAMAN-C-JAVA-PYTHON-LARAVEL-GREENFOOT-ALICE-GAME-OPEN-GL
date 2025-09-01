#include <iostream>
using namespace std;

void printArray(int arr[], int n, string label = "") {
    if (!label.empty()) cout << label;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertionSortAscending(int arr[], int n) {
    cout << "\n===== Insertion Sort Ascending =====\n";
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        cout << "\nPass " << i << ":\n";
        cout << "  Key to insert: " << key << endl;
        printArray(arr, n, "  Before: ");

        // Shift elements
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
        printArray(arr, n, "  After : ");
    }
}

void insertionSortDescending(int arr[], int n) {
    cout << "\n===== Insertion Sort Descending =====\n";
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        cout << "\nPass " << i << ":\n";
        cout << "  Key to insert: " << key << endl;
        printArray(arr, n, "  Before: ");

        // Shift elements
        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
        printArray(arr, n, "  After : ");
    }
}

int main() {
    int data[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(data) / sizeof(data[0]);

    int ascData[n], descData[n];
    for (int i = 0; i < n; i++) {
        ascData[i] = data[i];
        descData[i] = data[i];
    }

    // Ascending
    insertionSortAscending(ascData, n);
    printArray(ascData, n, "\nFinal Ascending Result: ");

    // Descending
    insertionSortDescending(descData, n);
    printArray(descData, n, "\nFinal Descending Result: ");

    return 0;
}
