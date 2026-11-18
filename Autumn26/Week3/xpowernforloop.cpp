#include <iostream>

int main(){
    int n;
    double x, result = 1;
    std::cin >> x >> n;

    for ( int i = 0 ; i < n ; i++ ){
        result = result * x;
    }

    std::cout << result << std::endl;
}