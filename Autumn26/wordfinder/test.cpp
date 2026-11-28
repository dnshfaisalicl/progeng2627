#include <iostream>
#include <fstream>
#include <vector>
#include <string>

bool row_searcher(std::vector<std::string> grid, std::string word, int& xout, int& yout){
    for ( int i = 0 ; i < grid.size() ; i++){
        int chr = 0;
        for ( int j = 0 ; j < grid[i].size() ; j++){
            if (grid[i][j] == word[chr]){
                chr++;
                if (chr == word.size()){
                    xout = j - word.size() + 1;
                    yout = i;
                    return true;
                }
            }
            else{
                chr = 0;
            }
        }
    }
    return false;
}



int main(){

    std::vector<std::string> grid = {
        "xappleg",
        "dzeazkg",
        "zwazzbx",
        "dxnqzoy",
        "qyueytp",
        "pythtyg"
    };


    std::string word = "apple";
    int xout, yout;

    if (row_searcher(grid, word, xout, yout )){
        std::cout << "true" << std::endl;
        std::cout << xout << " " << yout << std::endl;
    }

    else{
        std::cout << "false" << std::endl;
    }

}