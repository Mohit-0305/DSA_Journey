/*
Problem: Most Filled Row in a Parking Lot
Scenario: A parking lot has an RxC matrix layout. 
Empty spots are 0 and filled spots are 1. 
Find the index of the row that has the maximum number of 1s.

Input:
3 3
0 1 0
1 1 0
1 1 1
*/

#include<iostream>
using namespace std;

int main(){
    int R=0, C=0;
    int total=0, max=0, row=-1;
    cin>>R>>C;
    int mat[R][C];

    for(int i=0; i<R ; i++){
        for(int j=0 ; j<C ; j++){
            cin>>mat[i][j];
        }
    }

    for(int i=0; i<R ; i++){
        total=0;
        for(int j=0 ; j<C ; j++){
            total += mat[i][j]; 
        }
        if(total>max) max=total, row=i;
    }

    cout<<row;

    return 0;
}