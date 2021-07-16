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

    return 0;
}