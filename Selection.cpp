#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void selectionsort(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        int mini = i;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] < arr[mini])
                mini = j;
        }
        swap(arr[i], arr[mini]);
    }
}

int main()
{
    vector<int> arr = {5, 4, 3, 2, 1};
    selectionsort(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}