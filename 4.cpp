#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    

    set<int> set1 = {1,2,3,3,2,4,56,5 ,6,4,3};    //set does not print dublicate element

   for(auto s1:set1){
       cout<<s1<<" ";
   }



     set<int> s2= {1,3,4,6,7};
        auto max  = s2.find(3);   //log n time //it will be iterator to 3
   

    return 0;
}