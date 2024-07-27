#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void combine(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;

    int left = low, right = mid + 1;

    while (left <= mid && right <= high)
    {
        if (arr[left] < arr[right])
        {
            temp.push_back(arr[left]);
            left += 1;
        }
        else
        {
            temp.push_back(arr[right]);
            right += 1;
        }
    }

    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left += 1;
    }
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right += 1;
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}
void mergesort(vector<int> &arr, int low, int high)
{
    if (low == high)
        return;
    int mid = low + (high - low) / 2;

    mergesort(arr, low, mid);
    mergesort(arr, mid + 1, high);

    combine(arr, low, mid, high);
}

int main()
{
    vector<int> arr = {5, 4, 3, 2, 1};
    mergesort(arr, 0, arr.size() - 1);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}