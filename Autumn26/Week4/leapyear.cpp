#include <iostream>

bool leapyear(int year){
    bool ly;
    if ( year % 4 == 0){
        ly = true;
        if ( year % 100 == 0){
            if ( year % 400 == 0){
                ly = true;
            }
            else{
                ly = false;
            }
        }
    }
    else{
        ly = false;
    }
    return ly;
}

int main(){
    int input_year;

    std::cout << "please enter a year" << std::endl;
    std::cin >> input_year;

    if (leapyear(input_year)){
        std::cout << "it's a leap year" << std::endl;
    }
    else{
        std::cout << "it's not a leap year" << std::endl;
    }

}