#include <iostream>

int main(){
    int a, b, q = 0;
    std::cin >> a >> b;

    while (a > b){
        a = a - b;
        q = q + 1;
    }

    std::cout << "quotient = " << q << std::endl;
    std::cout << "remainder = " << a << std::endl;

}