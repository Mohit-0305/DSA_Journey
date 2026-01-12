/*
    *
   ***
  *****
 *******
*********
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int i, j, input = 0;
    cin>>input;
    for(i=0;i<input;i++){
        for(j=0;j<input-i-1;j++){
            cout<<" ";
        }
        for(j=0;j<2*i+1;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}