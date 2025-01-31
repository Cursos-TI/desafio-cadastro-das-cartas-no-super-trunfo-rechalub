#include <stdio.h>

int main() {

//variaves:

    char estado[55];
    char cidade[30];
    char codigo[20];
    int populaçao;
    float área,km²;
    float pib;
    int pontos,turisticos;

//entrada e saidas:

    printf("Digite o nome do estado:\n");
    scanf("%s",&estado);

    printf("Digite o nome da cidade:\n");
    scanf("%s" ,&cidade);
    
    printf("Digite o codigo da cidade:\n");
    scanf("%s" ,&codigo);
    
    printf("Digite a populaçao:\n");
    scanf("%d" ,&populaçao);

    printf("Digite a área em km²:\n");
    scanf("%f" ,&área);

    printf("Digite o pib:\n");
    scanf("%f" ,&pib);

    printf("Digite quantos pontos turisticos:\n");
    scanf("%d" ,&pontos,turisticos);

// O que vai ser imprimido:

    printf("nome do estado: %s -nome da cidade: %s " , estado , cidade);
    printf("codigo: %s" ,codigo);
    printf("populaçao: %d" ,populaçao);
    printf("área em km²: %f" ,área ,km²);
    printf("pib: %f" ,pib);
    printf("pontos turisticos: %d" ,pontos ,turisticos);



    return 0;

}