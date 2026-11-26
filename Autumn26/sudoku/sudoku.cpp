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

void get_row(int r, const std::vector<int>& in, std::vector<int>& out){
    for (int i = 0 ; i < in.size() ; i++){
        out.push_back(in[twod_to_oned( r, i, std::sqrt(in.size()))]);
    }
}

void get_col(int c, const std::vector<int>& in, std::vector<int>& out){
    for (int i = 0 ; i < in.size() ; i++){
        out.push_back(in[twod_to_oned(c, i, std::sqrt(in.size()))]);
    }
}

void get_subsq(int subs, const std::vector<int>& in, std::vector<int>& out){
    int side = std::sqrt(in.size());
    int subside = std::sqrt(side);
    for (int i = (subs/subside)*subside ; i < subside ; i++){
        for (int j = (subs/subside)*subside ; j < subside ; i++){
            out.push_back(in[twod_to_oned(i, j, std::sqrt(std::sqrt(in.size())))]);
        }
    }
}