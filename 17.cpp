//sorting
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    vector<int> vec(n);
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>vec[i];
    }
    sort(vec.begin()+1,vec.begin()+4);
    // for(auto cs:vec){
    //     cout<<cs<<" ";
    // }

    //reverse algorithm

   // reverse(startIterator,endIterator);

  //  reverse(arr ,arr+n);   for array
  reverse(vec.begin(),vec.end());
    
    return 0;
}