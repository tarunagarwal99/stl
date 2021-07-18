//dequeue and list
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
  deque<int> dq;
  //push_front //pop fornt
  //push _back //pop back
  // front end rbegin rend
  //size
  //clear
  //empty
  //at




    list<int> ls;
  //push_front //pop fornt
  //push _back //pop back
  // front end rbegin rend
  //size
  //clear
  //empty
  //at
//remove function - 0(1)
ls.push_back(1);
ls.push_back(2);
ls.push_back(3);
ls.remove(2);    //remove in o(1)

for(auto it:ls){
    cout<<it<<" ";
}
cout<<endl;


    return 0;
}