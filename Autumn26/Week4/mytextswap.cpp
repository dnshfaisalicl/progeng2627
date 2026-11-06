#include <iostream>
#include <string>

void textswap(std::string& word1 , std::string& word2){
    std::string tmp;
    tmp = word1;
    word1 = word2;
    word2 = tmp;

}



int main(){
    std::string word1, word2;

    std::cout << "please enter two words: " << std::endl;
    std::cin >> word1 >> word2;

    std::cout << "Words entered: " << std::endl;
    std::cout << "Word 1 : " << word1 << std::endl;
    std::cout << "Word 2 : " << word2 << std::endl;

    textswap(word1, word2);

    std::cout << "After swapping: " << std::endl;
    std::cout << "Word 1 : " << word1 << std::endl;
    std::cout << "Word 2 : " << word2 << std::endl;
    
}