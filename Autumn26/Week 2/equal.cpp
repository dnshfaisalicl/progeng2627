#include <iostream>

int main(){
    double a, b, c;

    a = 1;
    b = 2;
    c = a + b;

    std::cout << c << std::endl;

    a = 2;

    std::cout << c << std::endl;
    // 3 will be printed

    c = a + b;

    std::cout << c << std::endl;
    // 4 will be printed

}