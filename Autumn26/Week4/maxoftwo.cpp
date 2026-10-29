#include <iostream>

double max(double n1, double n2){
    double result;
    if ( n1 >= n2 ){
        result = n1;
    }
    else if (n2 > n1){
        result = n2;
    }
    return result;
}

int main(){
    double n1, n2;
    std::cin >> n1 >> n2;
    std::cout << max(n1, n2) << std::endl;
}