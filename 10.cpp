//stack and queue and priority queue 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    //stack and queue
    stack<int> stk; //last in first out datastructure
    //pop
    //top
    //size
    //empty
    //  push and emplace
    stk.push(2);
    stk.push(3);
    stk.push(4);
    stk.push(1);


    cout<<stk.top();   //it will print 1
    cout<<endl;
    stk.pop();   //it will delete 1 from the end
    cout<<stk.top();   //now it will print 4  
    while(!stk.empty()){
        stk.pop();    //this will delete the entire stack
    }
    cout<<endl;
    cout<<stk.size()<<endl;



    queue<int> qu;   //first in first out type operation
    qu.push(2);
    qu.push(4);
    qu.push(3);
    qu.push(1);
    qu.push(5);   //{2,4,3,1,5}

    cout<<qu.front();

    //push//front//top//size//empty
while(!qu.empty()){
    qu.pop();      //this will take linear amount of time 
}


//priority queue
//push
//size
//top //pop//empty
priority_queue<int> pq;
pq.push(2);
pq.push(4);
pq.push(5);
pq.push(6);
pq.push(1);


  cout<<pq.top()<<endl;

        return 0;
}