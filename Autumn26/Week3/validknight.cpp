#include <iostream>

int main(){
    int row1, column1, row2, column2;

    std::cin >> row1 >> column1 >> row2 >> column2;
    bool valid_move = false;

    if ((row1 > 0) && (row1 < 9) && (row2 > 0) && (row2 < 9)){
        if ((row2 - row1 == 1) || (row2 - row1 == -1)){
            if ((column2 - column1 == 2) || (column2 - column1 == -2)){
                valid_move = true;
            }
        }

        if ((row2 - row1 == 2) || (row2 - row1 == -2)){
            if ((column2 - column1 == 1) || (column2 - column1 == -1)){
                valid_move = true;
            }
        }
    }

    if (valid_move){
        std::cout << "The move is valid" << std::endl;
    }
    else{
        std::cout << "The move is invalid" << std::endl;
    }
}