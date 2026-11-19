#include <iostream>
#include <vector>

int min_vector_element( const std::vector<double>& vin){
    int curmin = 100000, index;
    for ( int i = 0 ; i < vin.size() ; i++ ){
        if ( vin[i] < curmin ){
            curmin = vin[i];
            index = i;
        }
    }

    if (vin.size() == 0){
        index = -1;
    }

    return(index);
}


int main (){

    std::vector<double> v1;
    std::vector<double> v2;
    std::vector<double> v3;

    v1 = { 3, 2, 0.4, 4, 0.99};
    v2 = { 16, 23, -82, 0};

    bool success;
    if (min_vector_element(v1) == 2){
        std::cout << 1 << std::endl;
    }
    else{
        std::cout << 0 << std::endl;
    }

    if (min_vector_element(v2) == 2){
        std::cout << 1 << std::endl;
    }
    else{
        std::cout << 0 << std::endl;
    }

    if (min_vector_element(v3) == -1){
        std::cout << 1 << std::endl;
    }
    else{
        std::cout << 0 << std::endl;
    }

}