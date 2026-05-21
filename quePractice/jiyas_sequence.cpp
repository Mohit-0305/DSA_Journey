#include<iostream>
using namespace std;

int main(){
    int n, temp;
    cin>>n;
    long long product=1;
    
    for(int i=0 ; i<n ; i++){
        cin>>temp;
        product *= temp;
    }
    
    int remain = product%10;
    
    if(remain==2 || remain==3 || remain==5){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }

    return 0;
}