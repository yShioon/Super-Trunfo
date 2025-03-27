#include <stdio.h>

int main() {

    int população;
    float pib;
    float area_km2;
    int  numero_pontos_turisticos;
    char nome_da_cidade[60];
    char codigo_de_cartas[4];

    printf("Digite a população: \n");
    scanf("%d", &população);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite a area em km2: \n");
    scanf("%F", &area_km2);

    printf("Digiteo o numero de pontos turisticos: \n");
    scanf("%d", &numero_pontos_turisticos);

    printf("Digite o nome da cidade: \n"); 
    scanf("%s", &nome_da_cidade);

    printf("Digite o codigo de cartas: \n");
    scanf("%s", &codigo_de_cartas);
    
    return 0;
    

    
}
