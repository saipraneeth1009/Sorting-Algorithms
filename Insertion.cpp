#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void insertionsort(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        int j = i;
        while (j > 0 && arr[j] < arr[j - 1])
        {
            swap(arr[j], arr[j - 1]);
            j -= 1;
        }
    }
}

int main()
{
    vector<int> arr = {5, 4, 3, 2, 1};
    insertionsort(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}