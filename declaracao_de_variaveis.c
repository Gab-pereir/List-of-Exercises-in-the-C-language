//Declare variáveis para armazenar seu nome, idade e altura. Em seguida, exiba esses valores no console.

#include <stdio.h>

int main(){

    char nome[20] = "Gabriel Pereira";
    int idade = 19;
    float altura = 1.60;

    printf("%s\n", nome);
    printf("%d\n", idade);
    printf("%.2f\n", altura);

    return 0;
}