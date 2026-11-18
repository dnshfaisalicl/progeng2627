#include <iostream>
#include <string>

int main(){
    std::string word;
    std::cin >> word;
    bool echo = true;

    while (echo){
        std::cout << word << std::endl;
        std::cin >> word;
        if ((word == "stop") || (word == "STOP")){
            echo = false;
        }
    }
}