#include <iostream>

double myperimeterarea(double length, double width, double& perimeter){

    double area;
    area = length * width;
    perimeter = (2 * length) + (2 * width);

    return area;
}

int main(){
    double length, width, perimeter;
    std::cout << "please enter length and width" << std::endl;
    std::cin >> length >> width;

    std::cout << "Area = " << myperimeterarea(length, width, perimeter) << std::endl;
    std::cout << "Perimeter = " << perimeter << std::endl;
}