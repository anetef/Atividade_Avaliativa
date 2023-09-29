#include<stdio.h>
#include<math.h>

int main(){
    float x, y; 
    printf("Insira valores de X e y:");
    scanf("%f %f",&x,&y);

    if(x == 0 && y ==0){
       printf("Origem\n");
    } else if (x == 0) {
        printf("Eixo Y\n");
    } else if (y == 0) {
        printf("Eixo X\n");
    } else {
        if (x > 0) {
            if (y > 0) {
                printf("Pertence ao Q1\n");
            } else {
                printf("Pertence ao Q4\n");
            }
        } else {
            if (y > 0) {
                printf("Pertence ao Q2\n");
            } else {
                printf("Pertence ao Q3\n");
            }
        }
    }

    return 0;
}