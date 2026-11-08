#include <iostream>
#include <vector>

int main(){
    int n, tmp, t;
    std::vector<int> v;
    std::cin >> n;

    std::cout << "enter " << n << " values:" << std::endl;
    for ( int i = 0 ; i < n ; i++){
        std::cin >> tmp;
        v.push_back(tmp);
    }

    std::cout << "enter a value t" << std::endl;
    std::cin >> t;
    std::cout << "values less than t : " << std::endl;
    for ( int i = 0 ; i < n ; i++){
        if (v[i] < t){
            std::cout << v[i] << std::endl;
        }
    }
}