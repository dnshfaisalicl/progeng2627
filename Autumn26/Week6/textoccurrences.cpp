#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

int main(){

    std::ifstream wordselect;
    wordselect.open("words.txt");

    std::ofstream occurrences;
    occurrences.open("occurrences.txt");

    if (!wordselect.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    if (!occurrences.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::ifstream text;
    std::string word;
    std::string tmp;
    int wordcounter = 0;

    
    while (wordselect >> word){
        text.open("text.txt");

        if (!text.is_open()){
            std::cout << "error opening file" << std::endl;
            return EXIT_FAILURE;
        }

        while (text >> tmp){
            if (tmp == word){
                wordcounter++;
            }
        }
        occurrences << word << " : " << wordcounter << std::endl;
        wordcounter = 0;
        text.close();
    }

    wordselect.close();
    occurrences.close();
}