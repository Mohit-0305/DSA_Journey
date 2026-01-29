/*
Input = 5
1
01
101
0101
10101
*/
#include<bits/stdc++.h>
using namespace std;

string pattern11(int in){
    string out;
    int i,j;
    for(i=0;i<in;i++){
        for(j=0;j<=i;j++){
            if((i+j)%2==0){
                out += "1";
            }else{
                out += "0";
            }
        }
        out += "\n";
    }
    return out;
}

int main(){
    int input = 0;
    cout<<"Input = ";
    cin>>input;
    cout<<pattern11(input);
    return 0;
}