#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
     

     unordered_set<int> set;
     set.insert(2);
     set.insert(3);
     set.insert(1);   // heere we dont which element is print at first
     //it takes o(1) time in average case
     //and in worst case it take linear o(set size) complexity.
    // if tle is happen then switch to set
    return 0;
}