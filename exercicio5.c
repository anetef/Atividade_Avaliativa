/* Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1, y1)
e p2(x2, y2) e calcule a distância entre eles, mostrando 4 casas decimais após a vírgula, segundo a fórmula*/
#include <stdio.h>
#include <math.h>

int main(){
    float X1, Y1, X2, Y2, X, Y, distancia; 
    printf("Insira os valores de X1, Y1, X2, Y2:\n");
    scanf("%f %f %f %f", &X1, &Y1, &X2, &Y2);

    X = pow((X2 - X1), 2);
    Y = pow((Y2 - Y1), 2);

    distancia = sqrt(X + Y);


    printf("A distancia entre eles e: %.4f", distancia);

    return 0; 
}