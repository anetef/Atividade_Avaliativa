#include <stdio.h>
#include <math.h>

 main() {
    float salario = 0, filhos = 0, maiorsal = 0, sSalario = 0, sFilhos = 0, mediasalario, mediafilhos, percentate100;
    int ate100 = 0, totalusuarios = 0;

 do {
        totalusuarios++;
 do {
     printf("Digite o valor do salario (ou um valor negativo para sair): ");
     scanf("%f", &salario);
     if (salario >= 0) {
     printf("Informe a quantidade de filhos: ");
     scanf("%f", &filhos);
     sSalario += salario;
     sFilhos += filhos;

    if (salario > maiorsal) {
     maiorsal = salario;
    }

    if (salario <= 100) {
     ate100++;
    }
    }else{
    break;
    }
    } while(1);

    }while(salario >= 0);

    mediasalario = sSalario / totalusuarios;
    mediafilhos = sFilhos / totalusuarios;
    percentate100 = (ate100 * 100.0) / totalusuarios;

    printf("\nA media do salario: %.2f\n", mediasalario);
    printf("\nA media de filhos: %.2f\n", mediafilhos);
    printf("\nSalario maior: %.2f\n", maiorsal);
    printf("\nO percentual de pessoas com salario ate 100 R$: %.2f%%\n", percentate100);

   
}