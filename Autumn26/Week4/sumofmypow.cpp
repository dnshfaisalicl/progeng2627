#include <iostream>

double mypow(double base, int exp){
    double result=1.0;

    if (exp >= 0){
        for (int i=0 ; i < exp ; i++){
            result = result * base;
        }
    }
    else{
        for (int i=0 ; i > exp ; i = i-1){
            result = result / base;
        }
    }
    return result;
}


int main(){
    double x, n, result=0;
    std::cin >> x >> n;

    for (int i = 1; i < n+1 ; i++){
        result = result + mypow(x, i);
    }
    std::cout << result << std::endl;
}