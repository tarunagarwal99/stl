#include<iostream>
#include<bits/stdc++.h> 
using namespace std;

int main() {
    
     int arr[]= {1,4,7,2,3,1,7,1};
    int n;
    cin>>n;
vector<int> vec;

     int cnt = 0;
    int x;
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            cnt++;
        }
    }
     cout<<cnt<<endl; 
     int cnt = count(arr,arr+n,1); //(startingIterator,ending Iterator,findingElement)

     // arr[] = {1,2,5,1,2,4,4};
     auto it = find(arr,arr+n,1);  //it return the first occurance of 1 otherwise it will pointing to end 
       int ind = it-arr;   //because in array the first index is arr[0]




    //    auto it = find(vec.begin(),vec.end(),1);    //for finding the occurance of 2 in vector

    // binary search  //logn complexityl
    bool ab = binary_search(arr,arr+n,8); 
    bool ab  = binary_search(vec.begin(),vec.end(),8);

    //lower bound function

    //returns an iterator pointing to the first element which is not greater then x

    //arr{} = {1,5,7,7,8,10,10,10,11,11,12} 
    //if x=10 then ans is 8
    return 0;
}
