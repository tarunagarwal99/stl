//multiset

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);
    ms.insert(5);   //{1,1,2,2,5};

    ms.erase(2);    //instance of alll 2 is erased

    ms.erase(ms.find(2));  //it will dleete the instances of 2 
    ms.count(2);   //it will print the occurance of 2 

    return 0;
}