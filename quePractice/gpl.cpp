// PS C:\Users\5XIN\Desktop\DSA_Journey\quePractice> g++ .\gpl.cpp
// PS C:\Users\5XIN\Desktop\DSA_Journey\quePractice> .\a.exe      
// 3
// 4
// 0001
// 1
// 2
// 10
// 2
// 4
// 1010
// 10
// PS C:\Users\5XIN\Desktop\DSA_Journey\quePractice> 

#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        long long sum=0;
        long long temp=1;
        for(int i=n-1 ; i>-1 ; i--){
            if(s[i]=='1'){
                sum += temp;
            }
            temp *= 2;
        }
        cout<<sum<<endl;
    }
    return 0;
}