// Mostre todos os numeros pares de 1 a 100.

#include <iostream>

int main(){
    for(int i = 1; i <= 100; i++ ) {
        if(i % 2 == 0) {
            std::cout << i << std::endl;
        }
    }
}