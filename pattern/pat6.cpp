/*
12345
1234
123
12
1

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int i, j, input = 0;
    cin>>input;
    for(i=input;i>0;i--){
        for(j=0;j<i;j++){
            cout<<j+1;
        }
        cout<<"\n";
    }
    return 0;
}