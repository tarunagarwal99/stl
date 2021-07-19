//sorting
//algorithm
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //sorting
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    //this sorting will take o(nlogn) time
    sort(arr, arr + n);     //sorting in array   //in increasing order
    sort(arr + 1, arr + 4); // for sorting between index 1 2 3

    vector<int> vec(5, 0);
    for (int i = 0; i < 5; i++)
    {
        cin >> vec[i];
    }
    sort(vec.begin(), vec.end());

    //vec :{1,6,2,7.4}
    //index{0,1,2,3,4}
    //now we want vector to be sorted as from 1 to 3 index
    // we want vector as {1,2,6,7,4}
    sort(vec.begin() + 1, vec.begin() + 4); //[1,4) this would not include 4

    //if i want to find the maximum element in any index range
    //i to j give me the maximum

    int max = INT_MIN;
    int i, j;
    for (int k = i; k <= j; k++)
    {
        if (vec[k] > max)
        {
            max = vec[k];
        }
    }
    //*max_element(firstIterator,lastIterator)
    //for array
    int el = *max_element(arr, arr + n);
    int el = *min_element(arr, arr + n);

    //for vector
    int el = *max_element(vec.begin(), vec.end());
    int el = *min_element(vec.begin(), vec.end());

    return 0;
}