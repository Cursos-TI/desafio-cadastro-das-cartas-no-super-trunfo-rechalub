#include <stdio.h>

int main() {

//variaves:

    
    char estado[55];
    char cidade[30];
    char codigo[10];
    int populacao;
    float area;
    float densidade_populacional;
    float pib;
    float pib_per_capita;
    int pontos_turisticos;
    
    

//entrada e saidas

    printf("Digite o nome do estado:\n");
    scanf("%s",&estado);

    printf("Digite o nome da cidade:\n");
    scanf("%s" ,&cidade);
    
    printf("Digite o codigo da carta:\n");
    scanf("%s" ,&codigo);
    
    printf("Digite a população:\n");
    scanf("%d" ,&populacao);

    printf("Digite a área em km²:\n");
    scanf("%f" ,&area);

    printf("Digite a densidade populacional:\n");
    scanf("%f" ,&densidade_populacional);

    printf("Digite o pib:\n");
    scanf("%f" ,&pib);

    printf("Digite o pib per capita:\n");
    scanf("%f" ,&pib_per_capita);

    printf("Digite quantos pontos turisticos:\n");
    scanf("%d" ,&pontos_turisticos);

    

// O que vai ser imprimido:

    printf("nome do estado: %s\n" , estado);
    printf("nome da cidade: %s\n" ,cidade);
    printf("codigo da carta: %s\n" ,codigo);
    printf("populaçao: %d\n" ,populacao);
    printf("área em km: %f\n" ,area);
    printf("densidade populacional: %f\n" ,densidade_populacional);
    printf("pib: %f\n" ,pib);
    printf("pib per capita: %f\n" ,pib_per_capita);
    printf("pontos turisticos: %d\n" ,pontos_turisticos);



    return 0;

}