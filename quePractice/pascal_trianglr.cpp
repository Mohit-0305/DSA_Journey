#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int mat[n][n];
        
        mat[0][0] = 1;
        for(int i=1 ; i<n ; i++){
            mat[i][0] = 1;
            mat[i][i] = 1;
            for(int j=1 ; j<i ; j++){
                mat[i][j] = mat[i-1][j-1] + mat[i-1][j];
            }
        }

        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<=i ; j++){
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}