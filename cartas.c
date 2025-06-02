#include <stdio.h>
#include <string.h>

int main(){

    // definindo variáveis

    char estado1[10], estado2[10];
    char codigo1[10], codigo2[10];
    char cidade1[30], cidade2[30];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

    // imprimindo as variáveis

    printf("Digite o estado 1: \n");
    scanf("%s", estado1);
    printf("O estado 1 é: %s\n", estado1);
    
    printf("Digite o estado 2: \n");
    scanf("%s", estado2);
    printf("O estado 2 é: %s\n", estado2);

    printf("Digite o código 1: \n");
    scanf("%s", codigo1);
    printf("O código 1 é: %s\n", codigo1);

    printf("Digite o código 2: \n");
    scanf("%s", codigo2);
    printf("O código 2 é: %s\n", codigo2);

    printf("Digite a cidade 1: \n");
    fgets(cidade1, 30, stdin);
    cidade1[strcspn(cidade1,"\n")] = 0;
    printf("A cidade 1 é: %s\n", cidade1);

    printf("Digite a cidade 2: \n");
    fgets(cidade2, 30, stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;
    printf("A cidade 2 é: %s\n", cidade2);

    printf("Digite a população 1: \n");
    scanf("%d", &populacao1);
    printf("A população 1 é: %d\n", populacao1);

    printf("Digite a população 2: \n");
    scanf("%d", &populacao2);
    printf("A população 2 é: %d\n", populacao2);

    printf("Digite a área 1: \n");
    scanf("%f", &area1);
    printf("A área 1 é: %.2f\n", area1);

    printf("Digite a área 2: \n");
    scanf("%f", &area2);
    printf("A área 2 é: %.2f\n", area2);

    printf("Digite o pib 1: \n");
    scanf("%f", &pib1);
    printf("O pib 1 é: %.2f\n", pib1);

    printf("Digite o pib 2: \n");
    scanf("%f", &pib2);
    printf("O pib 2 é: %.2f\n", pib2);

    printf("Digite os pontos turísticos 1: \n");
    scanf("%d", &pontos1);
    printf("Os pontos turísticos 1 são: %d\n", pontos1);

    printf("Digite os pontos turísticos 2: \n");
    scanf("%d", &pontos2);
    printf("Os pontos turísticos 2 são: %d\n", pontos2);




    return 0;

}