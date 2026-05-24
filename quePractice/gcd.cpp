#include<iostream>
#include<numeric>
#include<string>
using namespace std;

int main(int argc, char* argv[]){
    int a = 7;
    int b = 13;
    int gd = gcd(stoi(argv[1]),stoi(argv[2]));
    cout<<gd;
    return 0;
}