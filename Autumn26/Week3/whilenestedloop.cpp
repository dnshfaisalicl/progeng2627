#include <iostream>

int main(){
    int n, c2 = 0, c1 = 0;
    std::cin >> n;

    while (c2 < n){
        while ( c1 < n ){
            std::cout << "*";
            c1++;
        }   
    
        std::cout << std::endl;
        c2++;
        c1 = 0;
    }
}