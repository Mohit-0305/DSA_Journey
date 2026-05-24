#include<iostream>
using namespace std;

const int N = 1e5+10;
int a[N];

int main(){
    for(int i=0 ; i< ; i++){
        cin>>a[i];
    }
    int t;
    cout<<"enter t : ";
    cin>>t;

    while(t--){
        int l, r;
        long long sum = 0;
        cin>>l>>r;
        if(l<=r){
            for(int i=l ; i<=r ; i++){
                sum += arr[i];
            }
            cout<<sum<<endl;
        }
    }

    return 0;
}