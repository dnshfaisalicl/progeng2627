#include <iostream>
#include <string>

int main(){
    int row1, column1, row2, column2;
    std::string piece;

    std::cout << "Enter a chess piece" << std::endl;
    std::cin >> piece; 
    std::cout << "Enter the starting position" << std::endl;
    std::cin >> row1 >> column1;
    std::cout << "Enter the destination" << std::endl;
    std::cin >> row2 >> column2;

    int dy = (row2 - row1) , dx = (column2 - column1);


    bool valid_move = false;

    if ((row1 > 0) && (row1 < 9) && (row2 > 0) && (row2 < 9)){

        if( piece == "knight" ){
            if ((dy == 1) || (dy == -1)){
                if ((dx == 2) || (dx == -2)){
                    valid_move = true;
                }
            }

            if ((dy == 2) || (dy == -2)){
                if ((dx == 1) || (dx == -1)){
                    valid_move = true;
                }
            }
        }

        else if ( piece == "bishop" ){
            if ((dy == dx) || (dy == - dx)){
                valid_move = true;
            }
        }

        else if ( piece == "rook" ){
            if (dy != 0){
                if (dx == 0){
                    valid_move = true;
                }
            }
            if (dy == 0){
                if (dx != 0){
                    valid_move = true;
                }
            }
        }

        else if ( piece == "king"){
            if ((dx < 2) && (dx > -2) && (dy < 2) && (dy > -2)){
                valid_move = true;
            }
        }

        else if ( piece == "queen" ){
            if ((dy == dx) || (dy == - dx)){
                valid_move = true;
            }
            if (dy != 0){
                if (dx == 0){
                    valid_move = true;
                }
            }
            if (dx != 0){
                if (dy == 0){
                    valid_move = true;
                }
            }
        } 

        else{
            std::cout << "Not a valid piece" << std::endl;
        }
    }

    if (valid_move){
        std::cout << "The move is valid" << std::endl;
    }
    else{
        std::cout << "The move is invalid" << std::endl;
    }
}