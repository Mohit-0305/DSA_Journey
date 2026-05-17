// 4. Capitalize First Letter of Each Vector String

// Write a C++ program to capitalize the first character of each element of a given string vector. Return the vector.
// Example:
// Original Vector elements:
// red green black white Pink
// Capitalize the first character of each vector element:
// Red Green Black White Pink

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<string> capFirst(vector<string> in){
    for(string &s: in){
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        s[0] = toupper(s[0]);
    }
    return in;
}

int main(){
    vector<string> in = {"red", "green", "black", "white", "Pink", "MOHIT"};

    in = capFirst(in);
    
    for(string &s:in){
        cout<<s<<endl;
    }

    return 0;
}