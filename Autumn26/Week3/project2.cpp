#include <iostream>

int main(){
    int n, num;
    std::cin >> n;
    num = n;
    for (int i = 0; i < n ; i++){
        num = num * (n -1);
        n = n - 1;
    }
    std::cout << num << std::endl;
}