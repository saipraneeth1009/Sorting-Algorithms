#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void bubblesort(vector<int> &arr)
{
    for (int i = arr.size(); i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    vector<int> arr = {5, 4, 1, 2, 1};
    bubblesort(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}