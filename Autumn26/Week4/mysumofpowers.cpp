#include <iostream>

double mypow(double base, int exp){
    double result=1.0;

    for (int i=0 ; i < exp ; i++){
        result = result * base;
    }
    return result;
}

double mysumofpow(double x, int n){
    double result=0.0;
    for (int i = 1; i < n+1 ; i++){
        result = result + mypow(x, i);
    }
    return result;
}

int main(){
    double x;
    int n;
    std::cin >> x >> n;
    std::cout << mysumofpow(x, n) << std::endl;

}