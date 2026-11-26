#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <vector>

int twod_to_oned(int row, int col, int rowlen){
    return row*rowlen+col;
}

int mfind(int n, const std::vector<int>& v){
    for (int i = 0 ; i < v.size() ; i++){
        if (v[i] == n){
            return i;
        }
    }
    return -1;
}

bool check_sequence(const std::vector<int>& v){
    for (int i = 1 ; i <= v.size() ; i++){
        if ( mfind(i, v) == -1){
            return false;
        }
    }
    return true;
}
