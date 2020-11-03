//
//  main.cpp
//  InsertionSort
//
//  Created by 曾億宜 on 2020/11/3.
//  Copyright © 2020 曾億宜. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, key, j;
    cout << "N = ";
    cin >> N;
    vector<int> A(N);
    for(int &i : A) cin >> i;
    cout << "original:\n";
    for(int i : A) cout << i << " ";
    for(int i = 0; i < N; i++)
    {
        key = A[i]; //Insert A[i] into the sorted sequence A[1...i-1].
        j = i-1; //Previous number
        while(j >= 0 && A[j] > key) //Keep comparing the previous number and the next number
        {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key;
    }
    cout << '\n' << "sorted:\n";
    for(j = 0; j < N-1; j++) cout << A[j] << " ";
    cout << A[N-1] << endl;
}
