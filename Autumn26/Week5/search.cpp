#include <iostream>
#include <vector>

int search_vector(int n , const std::vector<int>& vin ){
    int index = -1; 

    for ( int i = 0 ; i < vin.size() ; i++ ){
        if ( vin[i] == n ){
            index = i;
            return index;
        }
    }
    return index;

}



int main(){

    std::vector<int> v1;
    std::vector<int> v2;
    std::vector<int> v3;

    v1 = {1, 3, 5, 7, 9};
    v2 = {2, 4, 6, 8, 10};
    v3 = {1, 1, 1, 1};

    if ( search_vector(5, v1) == 2){
        std::cout << 1 << std::endl;
    }
    else{
        std::cout << 0 << std::endl;
    }
    if ( search_vector(8, v2) == 3){
        std::cout << 1 << std::endl;
    }
    else{
        std::cout << 0 << std::endl;
    }
    if ( search_vector(2, v3) == -1){
        std::cout << 1 << std::endl;
    }
    else{
        std::cout << 0 << std::endl;
    }

}