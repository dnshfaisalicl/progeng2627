#include <iostream> 

int main(){
    double height, weight, bmi;

    std::cout << "height and weight?" << std::endl;
    std::cin >> height >> weight;

    bmi = weight / (height * height);

    std::cout << "BMI = " << bmi << std::endl;
}