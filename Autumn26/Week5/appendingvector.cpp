#include <iostream>
#include <vector>

void append_vectors( const std::vector<int>& vin1 , const std::vector<int>& vin2 , std::vector<int>& vout){
    
    for ( int i = 0 ; i < vin1.size() ; i++){
        vout.push_back(vin1[i]);
    }
    for ( int i = 0 ; i < vin2.size() ; i++){
        vout.push_back(vin2[i]);
    }

    return;
}


int main(){

    std::vector<int> v1;
    std::vector<int> v2;
    std::vector<int> vout;
    std::vector<int> vtest;

    v1 = {1, 7, 3, 4};
    v2 = {2, -2, 19};
    vtest = {1, 7, 3, 4, 2, -2, 19};

    append_vectors(v1, v2, vout);
    if (vout == vtest){
        std::cout << 1 << std::endl;
    }
    else{
        std::cout << 0 << std::endl;
    }

}