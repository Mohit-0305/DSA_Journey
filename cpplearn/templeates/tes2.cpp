// #include<iostream>

// using namespace std;

// int main(){
//     string str = "Mohit";
//     cout<<str;
//     return 0;
// }

#include <iostream>
#include <ranges>
#include <vector>

int main() {
    std::vector<int> v = {1,2,3,4,5};

    for (int x : v | std::views::filter([](int n){
        return n % 2 == 0;
    })) {
        std::cout << x << " ";
    }
}

