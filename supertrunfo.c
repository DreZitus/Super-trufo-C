#include <stdio.h>

int main(){
    char estado[20], estado2[20];
    char codigoCarta, codigoCarta2;
    char nome[20], nome2[20];
    float populacao, populacao2;
    float area, area2;
    float pib, pib2;
    float pontoTuristico, pontoTuristico2;
    unsigned int resultado, resultado2;


    float calculadensidade = populacao / area;
    float calculopibpercapita = pib / populacao;

    printf("Digite o estado: ");
    scanf("%s", estado);
    
    printf("Digite o código da carta: ");
    scanf(" %c", &codigoCarta);
    
    printf("Digite o nome da cidade: ");
    scanf("%s", nome);
    
    printf("Digite a população: ");
    scanf("%f", &populacao);
    
    printf("Digite a área: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontoTuristico);

    // dados da segunda carta

    printf("Digite o estado 2: ");
    scanf("%s", estado2);
    
    printf("Digite o código da carta 2: ");
    scanf(" %c", &codigoCarta2);
    
    printf("Digite o nome da cidade 2: ");
    scanf("%s", nome2);
    
    printf("Digite a população 2: ");
    scanf("%f", &populacao2);
    
    printf("Digite a área 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB 2: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos 2: ");
    scanf("%d", &pontoTuristico2);
    
    printf("estado é: %s\n", estado);
    printf("código é: %c\n", codigoCarta);
    printf("cidade é: %s\n", nome);
    printf("população é: %.2f\n", populacao);
    printf("área é: %.2f\n", area);
    printf("PIB é: %.2f\n", pib);
    printf("pontos é: %d\n", pontoTuristico);
    

    printf("estado é: %s\n", estado2);
    printf("código é: %c\n", codigoCarta2);
    printf("cidade é: %s\n", nome2);
    printf("população é: %.2f\n", populacao2);
    printf("área é: %.2f\n", area2);
    printf("PIB é: %.2f\n", pib2);
    printf("pontos é: %d\n", pontoTuristico2);

    
    resultado = (unsigned int)(estado[0] + codigoCarta + nome[0] + (int)populacao + (int)area + (int)pib + (int)pontoTuristico);
    resultado2 = (unsigned int)(estado2[0] + codigoCarta2 + nome2[0] + (int)populacao2 + (int)area2 + (int)pib2 + (int)pontoTuristico2);

    printf("Resultado da carta 1: %u\n", resultado);
    printf("Resultado da carta 2: %u\n", resultado2);

    scanf("digite para ver o resultado: ");
    
    if (resultado > resultado2) {
        printf("A carta 1 é maior que a carta 2.\n");
    } else if (resultado < resultado2) {
        printf("A carta 2 é maior que a carta 1.\n");
    } else {
        printf("As cartas são iguais.\n");
    }


    return 0;
}