#include <iostream>
using namespace std;

// Fungsi untuk mencetak array

void printArray(int *array, int n)
{
    for (int i = 0; i < n; ++i)
        cout << array[i] << " ";
}

// Menggabungkan dua subarray dari arr[].
// Subarray pertama adalah arr[l..m]
// Subarray kedua adalah arr[m+1..r]
void merge(int *array, int low, int mid, int high)
{
    int temp[high + 1];
    int i = low;
    int j = mid + 1;
    int k = 0;

    while (i <= mid && j <= high)
    {
        if (array[i] <= array[j])
            temp[k++] = array[i++];
        else
            temp[k++] = array[j++];
    }
    while (i <= mid)
        temp[k++] = array[i++];
    while (j <= high)
        temp[k++] = array[j++];
    k--;
    while (k >= 0)
    {
        array[k + low] = temp[k];
        k--;
    }
}


// Penggabungan antara sisi kiri dan sisi kanan yang kemudian
// diurutkan dari yang terkecil hingga terbesar
void mergeSort(int *array, int low, int high)
{
    int mid;

    if (low < high)
    {
        mid = (low + high) / 2;
        mergeSort(array, low, mid);
        mergeSort(array, mid + 1, high);
        merge(array, low, mid, high);
    }
}

// Kode driver / fungsi utama

int main()
{
    int array[] = {12,2,3,21,54,8,11};
    int n = sizeof(array)/sizeof(array[0]);

    cout << "Sebelum di Urutkan Merge Sort : \n" ;
    printArray(array, n);

    mergeSort(array, 0, n - 1 );

    cout << "\n Sesudah di Urutkan Merge Sort : \n" ;
    printArray(array, n);
    return (0);
}