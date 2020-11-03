//
//  main.cpp
//  MergeSort
//
//  Created by 曾億宜 on 2020/11/3.
//  Copyright © 2020 曾億宜. All rights reserved.
//
/*
 It operates as follows:
 Divide: Divide the n-element sequence to be sorted into two subsequences of n=2 elements each.
 Conquer: Sort the two subsequences recursively using merge sort.
 Combine: Merge the two sorted subsequences to produce the sorted answer.
 */
#include <iostream>
#include <vector>
using namespace std;
const int Max = 1000;

void Merge(vector<int> &Array, int front, int mid, int end)
{
    vector<int> LeftSub(Array.begin()+front, Array.begin()+mid+1), RightSub(Array.begin()+mid+1, Array.begin()+end+1);
    LeftSub.insert(LeftSub.end(), Max);
    RightSub.insert(RightSub.end(), Max);
    int idxLeft = 0, idxRight = 0;
    for (int i = front; i <= end; i++)
    {
        if (LeftSub[idxLeft] <= RightSub[idxRight])
        {
            Array[i] = LeftSub[idxLeft];
            idxLeft++;
        }
        else
        {
            Array[i] = RightSub[idxRight];
            idxRight++;
        }
    }
}

void MergeSort(vector<int> &array, int front, int end)
{
    if (front < end)
    {
        int mid = (front + end) / 2;
        MergeSort(array, front, mid);
        MergeSort(array, mid+1, end);
        Merge(array, front, mid, end);
    }
}

void PrintArray(vector<int> &array)
{
    for (int i = 0; i < array.size(); i++)
        cout << array[i] << " ";
    cout << endl;
}

int main(void)
{
    int n;
    cout << "n = ";
    cin >> n;
    int arr[n];
    for(int &i : arr) cin >> i;
    vector<int> array(arr, arr+sizeof(arr)/sizeof(int));
    cout << "original:\n";
    PrintArray(array);
    MergeSort(array, 0, n);
    cout << "sorted:\n";
    PrintArray(array);
    return 0;
}
