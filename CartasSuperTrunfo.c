#include <stdio.h>

int main() {
    
    char estado1 = 'A'; 
    char codigo1[4] = "A01"; 
    char cidade1[50] = "Sao_Paulo"; 
    int populacao1 = 12330000; 
    float area1 = 1521.0;
    float pib1 = 1200.0; 
    int pontos_turisticos1 = 50; 

    printf("Cadastro da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1); 
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1); 
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1); 
    printf("População: ");
    scanf("%d", &populacao1); 
    printf("Área (em km²): ");
    scanf("%f", &area1); 
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1); 
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1); 
    
    char estado2 = 'B';
    char codigo2[4] = "B01"; 
    char cidade2[50] = "Rio_de_Janeiro"; 
    int populacao2 = 6750000; 
    float area2 = 1200.0; 
    float pib2 = 900.0; 
    int pontos_turisticos2 = 60; 

    printf("\nCadastro da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2); 
    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2); 
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2); 
    printf("População: ");
    scanf("%d", &populacao2); 
    printf("Área (em km²): ");
    scanf("%f", &area2); 
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2); 
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2); 
    
    printf("\nComparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s (%c): %d\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%c): %d\n", cidade2, estado2, populacao2);
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    printf("\nComparação de cartas (Atributo: Densidade Populacional):\n");
    printf("Carta 1 - %s (%c): %.2f hab/km²\n", cidade1, estado1, densidade1);
    printf("Carta 2 - %s (%c): %.2f hab/km²\n", cidade2, estado2, densidade2);
    if (densidade1 < densidade2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (densidade2 < densidade1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }
    
    return 0;
}
