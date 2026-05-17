// 3. Create an n x n Matrix from Input

// Write a C++ program to create an n x n matrix by taking an integer (n) as input from the user.

// Example:
// Input: 2
// Input an integer value: Create an n x n matrix by said integer:
// 2 2
// 2 2

#include<iostream>
#include<vector>

using namespace std;

int main(){
    int in = -1;
    
    cout<<"Enter number for N x N matrix : ";
    cin>>in;
    
    vector<vector<int>> out(in,vector<int>(in,in));
    
    for(auto i: out){
        for(auto j: i){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}