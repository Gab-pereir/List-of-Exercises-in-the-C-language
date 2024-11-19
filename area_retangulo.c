//Crie um programa que declara duas variáveis inteiras para representar a largura e o comprimento de um retângulo. Depois, calcule e exiba a área do retângulo.

#include <stdio.h>

int main(){

    float largura = 1.20;
    float comprimento = 1.80;
    float area = largura * comprimento;

    printf("%.2f\n", area);
    
    return 0;
}