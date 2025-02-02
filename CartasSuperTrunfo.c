#include <stdio.h>

int main() {

//variaves:

    
    char estado[55];
    char cidade[30];
    char codigo[10];
    float populacao;
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
    scanf("%f" ,&populacao);

    printf("Digite a área em km²:\n");
    scanf("%f" ,&area);

    printf("Digite o pib:\n");
    scanf("%f" ,&pib);
    
    printf("Digite quantos pontos turisticos:\n");
    scanf("%d" ,&pontos_turisticos);

//base de caulculos .

    pib_per_capita= (float)(pib / populacao);

    densidade_populacional=(float)(populacao / area);

// O que vai ser imprimido:

    printf("nome do estado: %s\n" , estado);
    printf("nome da cidade: %s\n" ,cidade);
    printf("codigo da carta: %s\n" ,codigo);
    printf("populaçao: %2f\n" ,populacao);
    printf("área em km: %.2f\n" ,area);
    printf("densidade populacional é: %.2f\n" ,densidade_populacional);
    printf("pib: %.2f\n" ,pib);
    printf("pib per capita é: %.2f\n" ,pib_per_capita);
    printf("pontos turisticos: %d\n" ,pontos_turisticos);



    return 0;

}