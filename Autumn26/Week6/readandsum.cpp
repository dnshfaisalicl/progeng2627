#include <iostream>
#include <fstream>

int main(){
    std::ifstream infile; 
    infile.open("input.txt");

    if(infile.is_open()){ 
        int tmp, sum = 0;

        while(infile >> tmp){
            sum = sum + tmp;
            std::cout << tmp << std::endl;
        }

        infile.close(); 
        std::cout << "sum = " << sum << std::endl;

    }
    else{
        std::cout << "error opening file" << std::endl;
    }
}