#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {
        10,8,25,20
    };
    sort(arr,arr+4);
    for (int i = 0; i < 4; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    if(binary-search(arr,arr+4,4)){
        cout<<"found";
    }
    else{
        cout<<"does not found";
    }
    
    return 0;
}