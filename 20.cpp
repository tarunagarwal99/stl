//alogrithm
//q1- find me the  first index where the element x lies


// if we use find function that will gives us o(N) time complexity
//the array is sorted 

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i<n; i++)
    {
        cin>>n;
    }
    int x;
    cin>>x;
    //method 1
    int ind = lower_bound(arr,arr+n,x);
    int ind = lower_bound(arr,arr+n,x)-arr;


    //2nd method
    //if index is nopt inside in your range then it will show us an runtime error 
    int ind = lower_bound(arr,arr+n,x)-arr;
    if(ind !=n && arr[ind] == x){
        cout<<"found at:"<<ind;
    }
    else{
        cout<<"not found";
    }
    
    
    return 0;
}