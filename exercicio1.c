#include<stdio.h>
#include<math.h>
main(){
    double x, f, valorx;
    
    printf("Informe valor de X:");
    scanf("%lf",&x);
    if(x >= 4){

    valorx = (5 * x + 3) / sqrt(x * x - 16);
    printf("f(x)= %.2lf",valorx);

    }else{
        printf("o valor de X nao pode ser menor que 4");
    }
return 0;
}