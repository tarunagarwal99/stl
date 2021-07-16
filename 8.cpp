//ordered map
//striver placement series

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    //map does not stores in any order
    unordered_map<int,int> mp;

    //pair class

    pair<int,int> pr = {1,2};
    pair<pair<int,int>,int> pr1 = {{1,2},3};
    cout<<pr1.first.second<<endl;   //this will print the second element of first pair
    return 0;
    vector<pair<int,int>> vec;
    set<pair<int,int>>  st;
    map<pair<int,int>,int> mp1;
}