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
    std::cout << (leapyear(1600) == true) << std::endl;
    std::cout << (leapyear(2000) == true) << std::endl;
    std::cout << (leapyear(2400) == true) << std::endl;
    std::cout << (leapyear(2800) == true) << std::endl;
    std::cout << (leapyear(1700) == false) << std::endl;
    std::cout << (leapyear(1800) == false) << std::endl;
    std::cout << (leapyear(1900) == false) << std::endl;
    std::cout << (leapyear(2100) == false) << std::endl;
    std::cout << (leapyear(2200) == false) << std::endl;
    std::cout << (leapyear(2300) == false) << std::endl;
    std::cout << (leapyear(2500) == false) << std::endl;
    std::cout << (leapyear(2600) == false) << std::endl;
    std::cout << (leapyear(2700) == false) << std::endl;
    std::cout << (leapyear(2900) == false) << std::endl;
    std::cout << (leapyear(3000) == false) << std::endl;
}