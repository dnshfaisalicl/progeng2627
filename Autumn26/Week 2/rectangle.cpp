#include <iostream>

int main(){
    double length, width, area;
    std::cout << "what is the length and width?" << std::endl;
    std::cin >> length >> width;

    area = length * width;

    std::cout << "Area = " << area << std::endl;
}