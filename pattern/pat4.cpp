/*
1
22
333
4444
55555
666666
7777777
88888888
999999999
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int i, j, input = 0;
    cin>>input;
    for(i=0;i<input;i++){
        for(j=0;j<=i;j++){
            cout<<i+1;
        }
        cout<<"\n";
    }
    return 0;
}