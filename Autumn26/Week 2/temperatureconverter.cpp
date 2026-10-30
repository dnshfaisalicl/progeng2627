#include <iostream> 

int main(){
    double celc, fahr;

    std::cout << "Temperature in celcius?" << std::endl;
    std::cin >> celc;

    fahr = (celc * 1.8) + 32;

    std::cout << fahr << " F" << std::endl;
}