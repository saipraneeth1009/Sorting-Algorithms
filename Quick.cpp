#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[low];
    int i = low, j = high;

    while (i < j)
    {
        while (arr[i] <= pivot && i < high)
            i += 1;
        while (arr[j] >= pivot && j > low)
            j -= 1;

        if (i < j)
            swap(arr[i], arr[j]);
    }

    swap(arr[j], arr[low]);
    return j;
}
void quicksort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int pivot = partition(arr, low, high);
        quicksort(arr, low, pivot - 1);
        quicksort(arr, pivot + 1, high);
    }
}

int main()
{
    vector<int> arr = {5, 900, 3, 2, 1};
    quicksort(arr, 0, arr.size() - 1);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}