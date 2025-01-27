#include <stdio.h>


int main() {

    char estado[100];
    char cidade[40];
    char codigo[20];


    printf("Digite o nome do estado:\n");
    scanf("%s",&estado);

    printf("Digite o nome da cidade:\n");
    scanf("%s" ,&cidade);
    
    printf("Digite o codigo da cidade:\n");
    scanf("%s" ,&codigo);

    printf("nome do estado: %s -nome da cidade: %s - " , estado , cidade);
    printf("código %s" ,codigo);



    return 0;


}
