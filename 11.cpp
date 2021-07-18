//priority queue with pairs
//minimum priority queues 
// strivers placement series
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    // priority_queue<pair<int,int>> pq;
    // pq.push(1,5);    // this is not possible with priority queue

    //minimum prioity queue 
    priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(1);
    pq.push(5);
    pq.push(2);
    pq.push(6);
    cout<<pq.top()<<endl;   //it will return 1
    

    // for(auto it : pq){
    //     cout<<it<<" ";
    // }
    return 0;
}