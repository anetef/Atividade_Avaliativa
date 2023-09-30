#include <stdio.h>
#include <string.h>

int main() {
    int numcidades;
    printf("Digite o numero de cidades: ");
    scanf("%d", &numcidades);

    char cidmaioracidente[100], cidmenoracidente[100];
    char estado[3];
    float maioracidente = -1, menoracidente = -1;
    float somaveiculos = 0, somaacidentesrs = 0;
    int totalveiculos = 0, totalacidentesrs = 0;

    for (int i = 0; i < numcidades; i++) {
        char cidade[100];
        int veiculos, acidentes;

        printf("Digite o codigo da cidade: ");
        scanf("%s", cidade);

        printf("Digite o estado (sigla): ");
        scanf("%s", estado);

        printf("Digite o numero de veiculos de passeio (em 1992): ");
        scanf("%d", &veiculos);

        printf("Digite o numero de acidentes de transito com vitimas (em 1992): ");
        scanf("%d", &acidentes);

        somaveiculos += veiculos;
        totalveiculos++;

        if (strcmp(estado, "RS") == 0) {
            somaacidentesrs += acidentes;
            totalacidentesrs++;
        }

        if (maioracidente == -1 || acidentes > maioracidente) {
            maioracidente = acidentes;
            strcpy(cidmaioracidente, cidade);
        }

        if (menoracidente == -1 || acidentes < menoracidente) {
            menoracidente = acidentes;
            strcpy(cidmenoracidente, cidade);
        }
    }

    printf("\nEstatisticas:\n");
    printf("a) Maior indice de acidentes de transito: %s (%.2f acidentes)\n", cidmaioracidente, maioracidente);
    printf("   Menor indice de acidentes de transito: %s (%.2f acidentes)\n", cidmenoracidente, menoracidente);

    float mediaveiculos = somaveiculos / totalveiculos;
    printf("b) Media de veiculos nas cidades brasileiras: %.2f veiculos\n", mediaveiculos);

    if (totalacidentesrs > 0) {
        float mediaacidentesrs = somaacidentesrs / totalacidentesrs;
        printf("c) Media de acidentes com vitimas entre as cidades do Rio Grande do Sul: %.2f acidentes\n", mediaacidentesrs);
    } else {
        printf("c) Nao ha cidades do Rio Grande do Sul na amostra.\n");
    }

    return 0;
}