//Escreva um programa para um caixa de banco, que leia um valor inteiro R e determina o número de notas de 100, 50, 10, 5 e 1 reais necessário para pagar a quantia R. Faça de forma que o número de notas usado seja o menor possível, exibindo o resultado na tela

#include <stdio.h>

void troco(int v, int* n100, int* n50,int* n10, int* n5, int* n1 );


int main() {

    int valor;
    int nota100, nota50, nota10, nota5, nota1;

    printf("Digite o valor: ");
    scanf("%d", &valor);
    troco(valor, &nota100, &nota50, &nota10, &nota5, &nota1);

    printf("Notas de 100: %d\n", nota100);
    printf("Notas de 50: %d\n", nota50);
    printf("Notas de 10: %d\n", nota10);
    printf("Notas de 5: %d\n", nota5);
    printf("Notas de 1: %d\n", nota1);
}
    void troco(int v, int* n100, int* n50,int* n10, int* n5, int* n1) {

    *n100 = v / 100; //pegar valor e dividir por 100
    *n50 = v % 100 / 50; // (%)resto da de 100 e dividir por 50
    *n10 = v % 100 %50 / 10; // resto da de 100 e 50 e dividir por 10
    *n5 = v % 100 %50 %10 / 5;
    *n1 = v % 100 %50 %10 %5 / 1;
    }

