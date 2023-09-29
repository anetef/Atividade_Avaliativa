#include <stdio.h>

int main(){
   int A = 10, B = 10, C = 10;
       if (A + B > C && A + C > B && B + C > A) {
        printf("Os valores podem representar um triangulo\n");
    
      if(A == B && B == C){
        printf("e um triangulo equilatero");
      }else if(A == B || B == C || A ==C) {
        printf("e um triangulo isosceles");
      }else {
        printf("e um triangulo escaleno");
      }

    }else {
        printf("os valores nao representam um triangulo");
    }
    return 0;

}