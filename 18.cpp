// i will give you the range from i to j then find the sum og all element between them
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10];
    int sum = 0;
    int n;
    vector<int> vec;

    int i, j, k;
    for (k = i; k <= j; k++)
    {
        sum += arr[i];
    }
    //accumulate(startIterator,endIterator,InitialSum)
    int sum = accumulate(arr, arr + n, 0);           //for array
    int sum = accumulate(vec.begin(), vec.end(), 0); //for array

    //suppose we have an array: {1,6,7,1,2,1,3}
    // i am giving you x=1 then tell me the occurance of 1(means how many times 1 appear int the given inputs)

    int count = 0;
    int x;
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            count++;
        }
    }
     cout<<count<<endl; 

    return 0;
}