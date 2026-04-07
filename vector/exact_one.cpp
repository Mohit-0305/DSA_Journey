/*
1. Consecutive Rearrangement in Vector

Write a C++ program to check whether numbers in a vector can be rearranged so that each number appears exactly once in a consecutive list of numbers. Return true otherwise false.

Example:
1 2 5 0 3 6 7
Check consecutive numbers in the said vector! 0
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> seq = {0,2,1,3};
    bool result = true;
    sort(seq.begin(),seq.end());
    for(int i=1; i<seq.size();i++){
        if(seq[i] != seq[i-1]+1){
            result = false;
            break;
        }
    }
    cout<<result;
    return 0;
}