#include <iostream>

int main(){
    int n, steps = 0, max = 0;
    std::cin >> n;
    
    while ( n != 1){
        if ( n % 2 == 0){
            n = n/2;
        }
        else{
            n = (3 * n) + 1;
        }

        if ( n > max ){
            max = n;
        }

        steps = steps + 1;
        std::cout << n << " ";
    }
    std::cout << std::endl;
    std::cout << "number of steps : " << steps << std::endl;
    std::cout << "maximum number : " << max << std::endl;
}