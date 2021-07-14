#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    //day 2 of strivers stl series on codeverse unacademy

    //set
    // {1,2,3,2,5,4,5}   //here we want unique element that would be 5 then how would be print that

    set<int> st;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        st.insert(x);
    }
    for(auto t:st){
        cout<<t<<" ";   //here set will only print the unique element  
    }
    cout<<endl;


    //in sets st[0]  is not allowed

    //erase functionality
    st.erase(st.begin());   //this will erase the first element 
    //st.erase(startIterator,endIterator)
    //St.erase(iterator)    
    //st.erase(5)   //erase thet particular element

     for(auto t:st){
        cout<<t<<" ";   //here set will only print the unique element  
    }
   


   set<int> set1 = {1,2,3,3,2,4,56,5 ,6,4,3};

   for(auto s1:set1){
       cout<<s1<<" ";
   }


    

    return 0;
}