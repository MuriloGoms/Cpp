// Peca ao usuario um numero N e calcule o fatorial de N

#include <iostream>

int main(){
    int num;
    long long fatorial = 1;

    std::cout << "Digite um numero: ";
    std::cin >> num;

    if(num < 0) {
        std::cout << "Nao existe fatorial do numero negativo" << std::endl;
    }
    else{
        for(int i = 1; i <= num; i++) {
            fatorial *= i;
        }
    }
    std::cout << "O fatorial de " << num << " eh " << fatorial << std::endl;

    return 0;
}