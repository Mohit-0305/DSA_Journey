#include<iostream>
using namespace std;

template <class T>
class tens{
    T id = 0;

    public:
    tens(){
        id = id + 1;
    }
    tens(T* a){
        this->id = a->id;
    }

    T getId(){
        return this->id;
    }
};

int main(){
    tens<int> t1;
    tens<int> t2;
    tens<int> t3;
    tens<int> t4 = t1;

    cout<<t1.getId()<<endl;
    cout<<t2.getId()<<endl;
    cout<<t3.getId()<<endl;
    cout<<t4.getId()<<endl;

    return 0;
}