#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>

int main(){
    std::ifstream infile;
    infile.open("input.txt");

    if (!infile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::vector<int> v;
    int tmp;

    while (infile >> tmp){
        v.push_back(tmp);
    }

    std::ofstream outfile;
    outfile.open("output.txt");

    if (!outfile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    for ( int i = v.size() - 1 ; i >= 0 ; i--){
        outfile << v[i] << std::endl;
    }

    outfile.close();

}