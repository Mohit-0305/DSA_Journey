/*
Input = 5
*
**
***
****
*****
****
***
**
*
*/
#include<bits/stdc++.h>
using namespace std;

string pattern10(int in){
    string out;
    int i,j;
    for(i=0;i<2*in;i++){
        for(j=0;j<=i && i<in;j++){
            out += "*";
        }
        for(j=i+1;j<2*in && i>=in;j++){
            out += "*";
        }
        out += "\n";
    }
    return out;
}

int main(){
    int input = 0;
    cout<<"Input = ";
    cin>>input;
    cout<<pattern10(input);
    return 0;
}