#include <iostream>
using namespace std;

void heapify(int arr[], int root, int size)
{
    int largest = root;
    int left = 2 * root + 1;
    int right = 2 * root + 2;

    if (left < size && arr[left] > arr[largest])
        largest = left;

    if (right < size && arr[right] > arr[largest])
        largest = right;

    if (largest != root)
    {
        swap(arr[largest], arr[root]);

        heapify(arr, largest, size);
    }
}

void heapSort(int arr[], int size)
{
    for (int i = (size / 2) - 1; i >= 0; i--)
    {
        heapify(arr, i, size);
    }

    for (int i = size-1; i >= 0; i--)
    {
        swap(arr[i], arr[0]);

        heapify(arr, 0, i);
    }
    
}

int main()
{
    int arr[] = {7, 5, 6, 3, 4, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    heapSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<' ';
    }
    
    return 0;
}
