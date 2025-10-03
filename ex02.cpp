#include <iostream>
#include <string>

int main() {
    int n;
    int soma = 0;

    std::cout << "Digite um numero: ";
    std::cin >> n;

    for(int i = 1; i <= n; i++) {
        soma += i;
    }

    std::cout << "A soma de 1 ate " << n << " e de " << soma << std::endl;
}