#include <iostream>
#include <vector>

void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout){

    for ( int i = 0 ; i < vin.size() ; i++ ){
        if ( vin[i] < t ){
            vout.push_back(vin[i]);
        }
    }

}


int main(){

    double t;
    std::vector<double> v1;
    std::vector<double> vout;
    std::vector<double> vtest;

    t = 3.0;
    v1 = { 1, 2.9, 3, 4, 5};
    vtest = { 1, 2.9};


    filter_v(v1, t, vout);

    if ( vout == vtest ){
        std::cout << 1 << std::endl;
    }
    else{
        std::cout << 0 << std::endl;
    }



}