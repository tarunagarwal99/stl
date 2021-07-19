//bitset
//int -2byte(16 bit)
//char - 1 byte(8 bit)

//generally bitset take 1 bit to store as a datatype and generally used in  a segment tree kind of problems

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
     //bitset only store 1 or 0
    //bitset is container not a datatype
    bitset<5> bt;   //here bitset of 5 size;
    cin>>bt;    //10101

    //all   
    cout<<bt.all()<<endl;   //if all bits are 1 then it will print 1 otherwise prints zero
    //any
    cout<<bt.any()<<endl;  //if only 1 bit is 1 then it will print 1 as the output
    //count
    cout<<bt.count()<<endl;    //count the number of set bits
    //flip
    cout<<bt.flip(2)<<endl;    //it will turn flip thr number at position (index) =2
    //none
    cout<<bt.none()<<endl;   //if none is set ,then true else false iif bt-10000 it would return false
    cout<<bt.none()<<endl;   //if 0000 then it will print true
    //set
    bt.set();   //it will fill up entire position with 1(set)
    bt.set(3);   //it will set 1 at 3rd inder
    //reset
    bt.reset(); //it will  fill entire position with 0(reset)
    //size
    cout<<bt.size()<<endl;   //it will print the size of bitset

    return 0;
}