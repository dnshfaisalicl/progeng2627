#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

int main(){
    std::string filename;
    std::cin >> filename;
    std::ifstream infile; 
    infile.open(filename);

    if(!infile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;

    }

    int tmp;

    while(infile >> tmp){
        std::cout << tmp << std::endl;
    }

    infile.close();
}