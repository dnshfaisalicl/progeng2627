#include <iostream>

double max(double n1, double n2, double n3){
    double result;
    if ( (n1 >= n2) && (n1 >= n3)){
        result = n1;
    }
    else if ((n2 > n1) && (n2 >= n3)){
        result = n2;
    }
    else{
        result = n3;
    }
    return result;
}

int main(){
    double n1, n2, n3;
    std::cin >> n1 >> n2 >> n3;
    std::cout << max(n1, n2, n3) << std::endl;
}