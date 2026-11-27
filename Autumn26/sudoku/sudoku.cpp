#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <cstdlib>
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
    for (int i = 0 ; i < std::sqrt(in.size()) ; i++){
        out.push_back(in[twod_to_oned( r, i, std::sqrt(in.size()))]);
    }
}

void get_col(int c, const std::vector<int>& in, std::vector<int>& out){
    for (int i = 0 ; i < std::sqrt(in.size()) ; i++){
        out.push_back(in[twod_to_oned(i, c, std::sqrt(in.size()))]);
    }
}

void get_subsq(int subs, const std::vector<int>& in, std::vector<int>& out){
    int side = std::sqrt(in.size());
    int subside = std::sqrt(side);
    for (int i = (subs/subside)*subside ; i < ((subs/subside)*subside)+subside ; i++){
        for (int j = (subs%subside)*subside ; j < ((subs%subside)*subside)+subside ; j++){
            out.push_back(in[twod_to_oned(i, j, std::sqrt(in.size()))]);
        }
    }
}

bool valid_sudoku(const std::vector<int>& g){
    int side = std::sqrt(g.size());
    std::vector<int> seq;

    //for each row
    for (int i = 0 ; i < side ; i++){
        seq.clear();
        get_row(i, g, seq);

        if (!check_sequence(seq)){
            return false;
        }
    }

    //for each column
    for (int i = 0 ; i < side ; i++){
        seq.clear();
        get_col(i, g, seq);

        if (!check_sequence(seq)){
            return false;
        }
    }

    //for each subsquare
    for (int i = 0 ; i < side ; i++){
        seq.clear();
        get_subsq(i, g, seq);

        if (!check_sequence(seq)){
            return false;
        }
    }

    return true;
}

int main(int argc, char* argv[]){

    if (argc != 2){
        std::cout << "one argument needed" << std::endl;
        return EXIT_FAILURE;
    }

    std::vector<int> s;
    std::ifstream infile;
    infile.open(argv[1]);

    if (!infile.is_open()){
        std::cout << "error, can't open input file" << std::endl;
        return EXIT_FAILURE;
    }

    int tmp;
    while (infile >> tmp){
        s.push_back(tmp);
    }

    int side = std::sqrt(s.size());
    for ( int i = 0 ; i < side ; i++){
        for ( int j = 0 ; j < side ; j++){
            std::cout << s[twod_to_oned(i, j, side)] << " ";
        }
        std::cout << std::endl;
    }

    bool valid = valid_sudoku(s);

    if(valid){
        std::cout << "valid" << std::endl;
    }

    else{
        std::cout << "invalid" << std::endl;
    }

}