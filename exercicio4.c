/*Dados três valores A, B e C, construa um algoritmo para verificar se estes valores podem ser valores dos
lados de um triângulo, e se for classificá-los (imprimi-los) segundo os ângulos. (Triângulo Retângulo = 90º, 
Triângulo Obtusângulo > 90º, Triângulo Acutângulo < 90º)*/
#include <stdio.h>

int main(){
   int A = 10, B = 10, C = 5;
    if (A + B > C && A + C > B && B + C > A) {
    printf("Os valores podem representar um triangulo\n");

    float Aa = A * A;
    float Bb = B * B;
    float Cc = C * C;

    if (Aa == Bb + Cc || Bb == Aa + Cc || Cc == Aa + Bb) {
         printf("e um triangulo retangulo.\n");
    } else if (Aa > Bb + Cc || Bb > Aa + Cc || Cc > Aa + Bb) {
        printf("e um triangulo obtusangulo\n");
    } else {
        printf("e um triangulo acutangulo\n");
    }
} else {
    printf("Os valores nao podem representar um triangulo\n");
}

    return 0;
}