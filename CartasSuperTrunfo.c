#include <stdio.h>

int main() {

//variaves:

    char estado[50];
    char cidade[30];
    char codigo[20];
    float populacao;
    float area;
    float pib;
    int pontos_turisticos;

//entrada e saidas:

    printf("Digite o nome do estado:\n");
    scanf("%s",&estado);

    printf("Digite o nome da cidade:\n");
    scanf("%s" ,&cidade);
    
    printf("Digite o codigo da cidade:\n");
    scanf("%s" ,&codigo);
    
    printf("Digite a população:\n");
    scanf("%f" ,&populacao);

    printf("Digite a área em km²:\n");
    scanf("%f" ,&area);

    printf("Digite o pib:\n");
    scanf("%f" ,&pib);

    printf("Digite quantos pontos turisticos:\n");
    scanf("%d" ,&pontos_turisticos);

// O que vai ser imprimido:

    printf("nome do estado: %s -nome da cidade: %s " , estado , cidade);
    printf("codigo: %s" ,codigo);
    printf("populaçao: %f" ,populacao);
    printf("área em km: %f" ,area);
    printf("pib: %f" ,pib);
    printf("pontos turisticos: %d" ,pontos_turisticos);



    return 0;

}