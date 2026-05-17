// 5. Verify Letters of Second String in First String

// Write a C++ program to verify that all of the letters in the second string appear in the first string as well. Return true otherwise false.

// Example:
// Original String elements: Python Py
// Check - First string contains all letters from second string: true

#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<string> in = {"Mohit", "a"};
    int count = 0;

    for(char b: in[1]){
        for(char a: in[0]){
            if(a == b){
                count++;
                break;
            }
        }
    }

    cout<<"First string contains all letters from second string : ";

    if(count == in[1].size()){
        cout<<"true";
    }else{
        cout<<"false";
    }

    return 0;
}