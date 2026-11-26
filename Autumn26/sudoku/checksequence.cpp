#include <iostream>
#include <cmath>
#include <vector>

int twod_to_oned(int row, int col, int rowlen){
    return ((row*rowlen)+col);
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

int main(){
    std::vector<int> v = {1, 2, 3, 4, 4 ,1 ,2, 76, 4, 4, 4 ,1, 9, 4, 1, -7};
    std::vector<int> seq;
    std::cout << check_sequence(v) << std::endl;
    std::cout << (7/3)*3 << std::endl;
    get_row(1, v, seq);

    for ( int i = 0 ; i < seq.size() ; i++){
        std::cout << seq[i] << " ";
    }
    std::cout << std::endl;

}