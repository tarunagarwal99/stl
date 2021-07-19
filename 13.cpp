//given N element ,print the number which occurs at maximum
//n=5
// 1,3,4,3,5
//ans is 3 now how wolud we print that

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    map<int,int> mp;
    int max = 0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mp[x]++;
        if(mp[x] > mp[max]){ 
            max = x;
        }
        
    }
    cout<<max;
    return 0;
}