#include <stdio.h>

int main() {

//variaves:

    char estado[50];
    char cidade[30];
    char codigo[20];
    int populacao;
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
    scanf("%d" ,&populacao);

    printf("Digite a área em km²:\n");
    scanf("%f" ,&area);

    printf("Digite o pib:\n");
    scanf("%f" ,&pib);

    printf("Digite quantos pontos turisticos:\n");
    scanf("%d" ,&pontos_turisticos);

// O que vai ser imprimido:

    printf("nome do estado: %s\n" , estado);
    printf("nome da cidade: %s\n" ,cidade);
    printf("codigo: %s\n" ,codigo);
    printf("populaçao: %d\n" ,populacao);
    printf("área em km: %f\n" ,area);
    printf("pib: %f\n" ,pib);
    printf("pontos turisticos: %d\n" ,pontos_turisticos);



    return 0;

}