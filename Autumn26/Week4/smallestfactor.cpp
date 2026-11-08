#include <iostream>

int smallest_factor(int n){
    bool found_factor = false;
    
    for ( int cf = 2 ; cf < n ; cf++){
        if ((n % cf ) == 0){
            found_factor = true;
            return cf;
        }
    }
    return 0;

}



int main(){
    int n;
    std::cin >> n;
    std::cout << smallest_factor(n) << std::endl;
}