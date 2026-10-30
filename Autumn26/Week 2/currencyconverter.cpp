#include <iostream> 

int main(){
    double gbp, eur;

    std::cout << "GBP?" << std::endl;
    std::cin >> gbp;

    eur = 1.20 * gbp;

    std::cout << eur << " euros" << std::endl;
}