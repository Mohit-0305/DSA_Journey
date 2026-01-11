/*
*****
****
***
**
*
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int i, j, input = 0;
    cin>>input;
    for(i=input;i>0;i--){
        for(j=i;j>0;j--){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}