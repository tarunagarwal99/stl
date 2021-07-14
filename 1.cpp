//stl containers
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector<int> arr;
    arr.push_back(1); //arr.emplace_back(2)  given same result but take less time then push_back
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4); // {1,2,3,4}
    // vector<int> arr1(arr.begin(), arr.begin() + 2);






    // defining 2d vectors

    vector<vector<int>> vec;

    vector<int> arr1;
    arr1.push_back(1);
    arr1.push_back(2);

    vector<int> arr2;
    arr2.push_back(10);
    arr2.push_back(20);

    vector<int> arr3;
    arr3.push_back(100);
    arr3.push_back(200);

    vec.push_back(arr1); // here we insert vector as a datatype in vector itself
    vec.push_back(arr2);
    vec.push_back(arr3);


    //printing the element of 2D vector
//method 1 of doing this
    for(auto vctr:vec){
        for(auto it:vctr){
            cout<<it<<" ";
        }
        cout<<endl;
    }

    //method 2 of doing this

    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[i].size(); j++)
        {
           cout<<vec[i][j]<<endl;
        }
        cout<<endl;
        
    }


    //how to predifine a 2d vector
     //10x20 type 2d vector is return
    // vector<int> v(10,vector<int> (20,0));

    vec.push_back(vector<int>(20,0));   // here we dynamically increase vector by increasing their column size

    // vec[2].push_back[1];   // here we dynamically increase array by inserting element into it


    // here we declare an empty vector which has datatype vector<int>
    vector<int> arr[4];

    //declaring a 3d vector
     // 10x20x30
    // vector<vector<vector<int>>> vec(10,vector<int> v(20,vector<int> (30,0)));
    return 0;
}