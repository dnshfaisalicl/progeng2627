#include <iostream>
#include <vector>

int main(){
    int n, tmp, s, occurences = 0, index;
    std::vector<int> v;
    std::vector<int> indices;
    std::cin >> n;

    std::cout << "enter " << n << " values:" << std::endl;
    for ( int i = 0 ; i < n ; i++){
        std::cin >> tmp;
        v.push_back(tmp);
    }

    std::cout << "enter a value s" << std::endl;
    std::cin >> s;
    for ( int i = 0 ; i < n ; i++){
        if (v[i] == s){
            indices.push_back(i);
        }
    }

    if ( indices.size() > 0 ){
        std::cout << "there are " << indices.size() << " occurences of " << s << " at indices: " << std::endl;
        for ( int i = 0 ; i < indices.size() ; i++ ){
            std::cout << indices[i] << std::endl;
        }
    }
    else{
        std::cout << "there are no occurences of " << s << std::endl;
    }
}