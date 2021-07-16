//key value pair-map
//striver
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

    //map only store unique value
    //log n is the tc of map

    map<string,int> mp;  //it store in alphabatical order in case of string
    mp["tarun"] = 24;
    mp["shivam"] = 34;
    mp["harsh"] = 23;
    mp["vnapislkva"] = 59;    
    mp.emplace("tarun",35);   // it will overwrite the value of tarun
    

    mp.erase("tarun");   //it will delete the instance of tarun
    mp.erase(mp.begin());   //clear the initial position
      mp.clear();   
    //   mp.erase(mp.begin(),mp.begin() + 2);
     auto it = mp.find("tarun");    //this will return the first occurance of tarun

    pair<int,int> pr;   // it automatically taken the pair of integer from maps
    pr.first = 10;
    pr.second = 20;    
     for(auto i:mp){
       cout<<i.first<<" "<<i.second<<endl;
     }
          return 0;
}