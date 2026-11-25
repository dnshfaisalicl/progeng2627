#include <iostream>
#include <cmath>

int main(){
    double a, b, c;
    bool valid_triangle;

    std::cout << "Enter three side lengths: " << std::endl;
    std::cin >> a >> b >> c;

    if ( (a + b > c) && (a + c > b) && (b + c > a)){
        valid_triangle = true;
    }
    else{
        valid_triangle = false;
    }

    if (valid_triangle){
        if ((a == b) && (a == c)){
            std::cout << "The triangle is equilateral" << std::endl;
        }
        else if(a == b){
            std::cout << "The triangle is isosceles" << std::endl;
        }
        else if ((a != b) && (a != c) && (b != c)){
            std::cout << "The triangle is scalene" << std::endl;
        }

        std::cout << "Perimeter = " << a + b + c << std::endl;
        double s = (a + b + c) / 2;
        std::cout << "Area = " << std::sqrt(s * (s - a) * (s - b) * (s - c)) << std::endl;
    }

    else{
        std::cout << "The triangle is invalid" << std::endl;
    }
}