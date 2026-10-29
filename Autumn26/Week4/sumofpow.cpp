#include <iostream>
#include <cmath>

int main(){
    double x, n, result=0;
    std::cin >> x >> n;

    for (int i = 1; i < n+1 ; i++){
        result = result + std::pow(x, i);
    }
    std::cout << result << std::endl;
}