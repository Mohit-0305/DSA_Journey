// 2. Elements Smaller Than Adjacent Neighbours

// Write a C++ program that returns the elements in a vector that are strictly smaller than their adjacent left and right neighbours.

// Example:
// Original Vector elements:
// 1 2 5 0 3 1 7
// Vector elements that are smaller than its adjacent neighbours:
// 0
// 1

#include<iostream>
#include<vector>

using namespace std;

vector<int> smallNeighbour(vector<int>::iterator s, vector<int>::iterator l){
    vector<int> out;

    for(auto i=s+1 ; i!=l ; i++){
        if(*i<*prev(i) && *i<*next(i)){
            out.push_back(*i);
        }
    }

    return out;
}

int main(){
    vector<int> og = {1, 2, 5, 0, 3, 1, 7, 45, 10, 78, 1, 0, 5};
    vector<int> out;

    out = smallNeighbour(og.begin(), og.end());

    cout<<"Vector elements that are smaller than its adjecent neighbours : [";
    for(int i : out){
        cout<<i<<", ";
    }
    cout<<"\b\b] "<<endl;
    return 0;
}