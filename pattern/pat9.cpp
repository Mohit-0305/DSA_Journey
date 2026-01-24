/*
    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *
*/
#include<bits/stdc++.h>
using namespace std;

class pattern{
    public:
        string uppertriangle(int N){
            int i,j;
            string out;
            for(i=0;i<N;i++){
                for(j=0;j<N-i-1;j++){
                    out += " ";
                }
                for(j=0;j<2*i+1;j++){
                    out += "*";
                }
                out += "\n";
            }
            return out;
        }

        string downtriangle(int N){
            int i, j;
            string out;
            for(i=0;i<N;i++){
                for(j=0;j<i;j++){
                    out += " ";
                }
                for(j=1;j<=2*(N-i-1)+1;j++){
                    out += "*";
                }
                out += "\n";
            }
            return out;
        }
};

int main(){
    int input = 0;
    cin>>input;
    pattern obj;
    string out = "";
    out += obj.uppertriangle(input);
    out += obj.downtriangle(input);
    cout<<out;
    return 0;
}