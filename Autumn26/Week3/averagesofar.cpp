#include <iostream>

int main(){
    int n = 1, counter = 0;
    double average = 0.0, sum = 0.0;
    std::cout << "enter a number:" << std::endl;
    std::cin >> n;

    while (n != 0){
        sum = sum + n;
        counter = counter + 1;
        average = sum / counter;
        std::cout << "the average so far is: " << std::endl;
        std::cout << average << std::endl;
        std::cout << "enter a number: " << std::endl;
        std::cin >> n;
    }
}