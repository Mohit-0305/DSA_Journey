// PS C:\Users\5XIN\Desktop\DSA_Journey\quePractice> .\a.exe                                 
// 1
// 10
// 1 
// 1 1 
// 1 2 1 
// 1 3 3 1 
// 1 4 6 4 1 
// 1 5 10 10 5 1 
// 1 6 15 20 15 6 1 
// 1 7 21 35 35 21 7 1 
// 1 8 28 56 70 56 28 8 1 
// 1 9 36 84 126 126 84 36 9 1 
// PS C:\Users\5XIN\Desktop\DSA_Journey\quePractice> 

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