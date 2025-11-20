#include <stdio.h>

int main() {

    int i = 10;

    // For de 5 a 9
    for (i = 5; i < 10; i++) {
        printf("A rainha foi para a direita\n");
    }

    // While até i ser menor ou igual a 10
    while (i <= 10) {
        printf("A rainha foi para a Esquerda\n");
        i++; // incrementa 
    }

    // Do While executa ao menos 1 vez
    do {
        printf("Cima\n");
        i++;
    } while (i == 10); // não entrará novamente pois i foi incrementado

    printf("Desafio Xadrez\n");

    return 0;
}
