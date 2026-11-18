#include <iostream>

int main(){
    int n, tmp, result = 1;
    std::cin >> n;
    tmp = n;

    for ( int i = 0 ; i < n ; i++){
        result = result * tmp;
        tmp = tmp - 1;
    }

    std::cout << result << std::endl;
}