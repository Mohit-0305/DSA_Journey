/*
1
12
123
1234
12345
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int i, j, input = 0;
    cin>>input;
    for(i=0;i<input;i++){
        for(j=0;j<=i;j++){
            cout<<j+1;
        }
        cout<<"\n";
    }
    return 0;
}