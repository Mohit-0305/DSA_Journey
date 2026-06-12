#include<iostream>
#include<map>
using namespace std;

int main(){
    map<string, int> m;
    int t;
    cin>>t;
    for(int i=0 ; i<t ; i++){
        string s;
        cin>>s;
        m[s]++;
    }
    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }

    return 0;
}