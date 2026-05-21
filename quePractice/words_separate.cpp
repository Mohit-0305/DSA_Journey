// PS C:\Users\5XIN\Desktop\DSA_Journey\quePractice> .\a.exe
// mohit vilas khandale a btech student at sggsient nanded exit
// MOHIT
// VILAS
// KHANDALE
// A
// BTECH
// STUDENT
// AT
// SGGSIENT
// NANDED
// PS C:\Users\5XIN\Desktop\DSA_Journey\quePractice> 



#include<iostream>
using namespace std;

char Upper(char c){
    return 'A' + (c - 'a');
}

int main(){
    string str;
    while(cin>>str){

        if(str == "exit"){
            break;
        }

        for(int i=0 ; i<str.size() ; i++){
            str[i] = Upper(str[i]);
        }
        cout<<str<<endl;
    }
    return 0;
}