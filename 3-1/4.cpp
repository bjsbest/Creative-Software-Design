#include <iostream>

namespace first_space{
    void print(){
        std::cout << "Print from first space";
    }
}

namespace second_space{
    void print(){
        std::cout << "Print from second space";
    }
}

int main(){
    int n;
    std::cin >> n;
    if(n == 1){
        first_space::print();
    }
    else{
        second_space::print();
    }
    return 0;
}