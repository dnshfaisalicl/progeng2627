#include <iostream>
#include <vector>

int main(){
    int n, tmp, s, occurences = 0;
    std::vector<int> v;
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
            occurences++;
        }
    }
    std::cout << "number of occurences of " << s << " = " << occurences << std::endl;
}