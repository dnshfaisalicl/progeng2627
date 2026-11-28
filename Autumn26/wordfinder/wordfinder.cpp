#include <iostream>
#include <fstream>
#include <vector>
#include <string>

bool row_searcher(std::vector<std::string> grid, std::string word, std::vector<std::string>& solution){
    for ( int i = 0 ; i < grid.size() ; i++){
        int chr = 0;
        for ( int j = 0 ; j < grid[i].size() ; j++){
            if ( j < grid[i].size() - word.size()){
                if (grid[i][j] == word[chr]){
                    chr++;
                    if (chr == word.size()){
                        for ( int k = 0 ; k < word.size() ; k++){
                            solution[i][j-k] = grid[i][j-k];
                        }
                        return true;
                    }
                }
                else if(grid[i][j] == word[0]){
                    chr = 1;
                }
                else{
                    chr = 0;
                }
            }
        }
    }
    return false;
}



void find_words(
    const std::vector<std::string>& grid, 
    const std::vector<std::string>& words, 
    std::vector<std::string>& solution, 
    std::vector<std::string>& not_found
){

    for (int i = 0 ; i < words.size() ; i++){
        if (!row_searcher(grid, words[i], solution)){
            not_found.push_back(words[i]);
        }

    }








    //how to output solution??
    // initialise solution to be a grid of #
    //overwrite positions with grid characters if they are part of a word
    std::string tmp;

    for ( int i = 0 ; i < grid[0].size() ; i++){
        tmp.push_back('#');
    }

    for ( int i = 0 ; i < grid.size() ; i++){
        solution.push_back(tmp);
    }


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

    std::vector<std::string> words = {"peanut", "bot", "mango", "apple", "cinnamon"};
    std::vector<std::string> solution;
    std::vector<std::string> not_found;

    find_words(grid, words, solution, not_found); 

    std::vector<std::string> expected_solution = {
        "#apple#",
        "##e####",
        "##a##b#",
        "##n##o#",
        "##u##t#",
        "##t####"
    };

    std::vector<std::string> expected_not_found = {"mango", "cinnamon"};

    if( (solution == expected_solution) && (not_found == expected_not_found) ){
        std::cout << "test passed" << std::endl;
    }
    else{
        std::cout << "test failed" << std::endl;
    }

    std::cout << "solution:" << std::endl;
    for(int i = 0; i < solution.size(); i++){
        std::cout << solution[i] << std::endl;
    }

    std::cout << "not found:" << std::endl;
    for(int i = 0; i < not_found.size(); i++){
        std::cout << not_found[i] << std::endl;
    }

}