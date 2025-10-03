#include <iostream>
#include <string>

int main() {
    int n;
    int x;

    std::cout << "Digite um numero: ";
    std::cin >> n;

    for(int i = 1; i <= 10; i++) {
       std::cout << n << "x" << i << " = " << n * i << std::endl; 

    }
    return 0;
}