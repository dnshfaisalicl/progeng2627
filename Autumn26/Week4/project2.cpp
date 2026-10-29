#include <iostream>


double mypow(double base, int exp){
    double result = 1;
    if (exp >= 0){
        for ( int i = 0; i < exp; i++){
            result = result * base;
        }
    }
    else{
        for ( int i = 0; i > exp; i = i - 1){
            result = result / base;
        }
    }
    return result;
}

int main(){
    double x;
    int n, sum=0;
    std::cin >> x >> n;
    for ( int i2=1; i2< n+1; i2++){
        sum = sum + mypow(x, i2);
    }

    std::cout << sum << std::endl;

}