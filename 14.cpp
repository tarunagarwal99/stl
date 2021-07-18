//given N element -print all element in sorted order
//input N=6 : 6 6 3 2 3 5
//so ans is : 2 3 3 5 6 6 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    multiset<int> ms;      //with the use of multiset it will print all element in sorted order
    for(int i=0;i<n;i++){
        int x;     //here this will only take o(nlogn) time to run this loop
        cin>>x;
        ms.insert(x);

    }

    for(auto it:ms){
        cout<<it<<" ";
    }
    



    return 0;
}