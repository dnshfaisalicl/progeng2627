#include <iostream>

int main(){
    int a, b, n;
    int x = 1, y = 1;

    std::cin >> n;
    for ( ; x < n + 1 ; x++){
        for ( int y = 1 ; y < n + 1 ; y++){
            std::cout << y * x << "\t" ;
        }
        std::cout << std::endl;
        y = 0;
    }
}