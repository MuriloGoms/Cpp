// peca ao usuario que digite 10 numeros e mostre qual foi o maior deles. Use while ate acertar

#include <iostream>

int main(){
    int contador = 0;
    int numero;
    int maior;

    std::cout << "Digite um numero: ";
    std::cin >> numero;

    //Faz com que o primeiro numero ja seja considerado o maior
    maior = numero;
    contador = 1;
    

    while(contador < 10){
        std::cout << "Digite outro numero: ";
        std::cin >> numero;

        if(numero > maior){
            maior = numero; //Atualiza o maior
        }

        contador++; //incrementa o contador
    }

    std::cout << "O maior numero digitado foi: " << maior << std::endl;

    return 0;
} 

