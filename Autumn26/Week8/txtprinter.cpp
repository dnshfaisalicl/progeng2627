#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char* argv[]){

    if(argc == 1){
        std::ifstream txtfile;
        txtfile.open(argv[1]);
    

        if(txtfile.is_open()){
            std::string tmp;
            while(txtfile >> tmp){
                std::cout << tmp << std::endl;
            }
        }
    }
}

