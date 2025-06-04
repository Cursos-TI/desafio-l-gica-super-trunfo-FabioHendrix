#include <stdio.h>
#include <string.h>

int main() {

    printf("Cadastro de cartas - Super Trunfo! \n");

    // Definindo tipos de dados e variáveis para a carta n.º 1
    char estado1;
    char codigo_da_carta1[4];
    char nome_da_cidade1[50];
    unsigned long int populacao1; 
    float area1;
    float PIB1;
    int numero_de_pontos_turisticos1;
    float PIB_per_capita1;
    float densidade_populacional1;
    float super_poder1;
    int pontos_carta1 = 0; // Declaração mantida como no seu código anterior
    
    // Coletando dados para a carta n.º 1
    printf("Insira os dados da primeira carta abaixo: \n");
    
    printf("Digite uma letra de 'A' a 'H', representando um dos oito estados: \n");
    scanf(" %c", &estado1);
    getchar(); // Limpa o buffer de entrada

    printf("Digite o código da carta (Formato: LetraDoEstado + Número. ex: A01, B02): \n");
    scanf("%s", codigo_da_carta1);
    getchar(); // Limpa o buffer de entrada

    printf("Digite o nome da cidade: \n");
    fgets(nome_da_cidade1, 50, stdin);
    nome_da_cidade1[strcspn(nome_da_cidade1, "\n")] = '\0'; // Remove a quebra de linha

    printf("Digite a quantidade populacional da cidade: \n");
    scanf("%lu", &populacao1);
    getchar(); // Limpa o buffer de entrada

    printf("Digite a área da cidade em km² (máximo de duas casas decimais após o ponto. ex: 123.45): \n");
    scanf("%f", &area1);
    getchar(); // Limpa o buffer de entrada

    printf("Digite o Produto Interno Bruto (PIB) em escala de bilhões de R$ (máximo de duas casas decimais após o ponto. ex: 1.45): \n");
    scanf("%f", &PIB1);
    getchar(); // Limpa o buffer de entrada

    printf("Digite o número de pontos turísticos na cidade: \n");
    scanf("%d", &numero_de_pontos_turisticos1);
    getchar(); // Limpa o buffer de entrada

    // Definindo tipos de dados e variáveis para a carta n.º 2
    char estado2;
    char codigo_da_carta2[4];
    char nome_da_cidade2[50];
    unsigned long int populacao2; 
    float area2;
    float PIB2;
    int numero_de_pontos_turisticos2;
    float PIB_per_capita2;
    float densidade_populacional2;
    float super_poder2;
    int pontos_carta2 = 0; // Declaração mantida como no seu código anterior

    printf("\n"); // Linha em branco para melhor visualização

    // Coletando dados para a carta n.º 2
    printf("Insira os dados da segunda carta abaixo: \n");
    
    printf("Digite uma letra de 'A' a 'H', representando um dos oito estados: \n");
    scanf(" %c", &estado2);
    getchar(); // Limpa o buffer de entrada

    printf("Digite o código da carta (Formato: LetraDoEstado + Número. ex: A01, B02): \n");
    scanf("%s", codigo_da_carta2);
    getchar(); // Limpa o buffer de entrada

    printf("Digite o nome da cidade: \n");
    fgets(nome_da_cidade2, 50, stdin);
    nome_da_cidade2[strcspn(nome_da_cidade2, "\n")] = '\0'; // Remove a quebra de linha

    printf("Digite a quantidade populacional da cidade: \n");
    scanf("%lu", &populacao2);
    getchar(); // Limpa o buffer de entrada

    printf("Digite a área da cidade em km² (máximo de duas casas decimais após o ponto. ex: 123.45): \n");
    scanf("%f", &area2);
    getchar(); // Limpa o buffer de entrada

    printf("Digite o Produto Interno Bruto (PIB) em escala de bilhões de R$ (máximo de duas casas decimais após o ponto. ex: 1.45): \n");
    scanf("%f", &PIB2);
    getchar(); // Limpa o buffer de entrada

    printf("Digite o número de pontos turísticos na cidade: \n");
    scanf("%d", &numero_de_pontos_turisticos2);
    getchar(); // Limpa o buffer de entrada

    printf("\n"); // Linha em branco para separar a coleta de dados da visualização

    // Cálculo de PIB per capita e densidade populacional
    densidade_populacional1 = populacao1 / area1;
    PIB_per_capita1 = (PIB1 * 1e9) / populacao1;

    densidade_populacional2 = populacao2 / area2;
    PIB_per_capita2 = (PIB2 * 1e9) / populacao2;

    // Cálculo do inverso da densidade populacional
    float inverso_densidade1 = 1.0 / densidade_populacional1;
    float inverso_densidade2 = 1.0 / densidade_populacional2;

    // Cálculo de super poder
    super_poder1 = populacao1 + area1 + PIB1 + numero_de_pontos_turisticos1 + PIB_per_capita1 + inverso_densidade1;
    super_poder2 = populacao2 + area2 + PIB2 + numero_de_pontos_turisticos2 + PIB_per_capita2 + inverso_densidade2;
    
    // Exibição de resultados finais (Exibição dos dados das cartas)

    printf("\n");

    printf("Carta n.º 1:\n");
    printf("\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigo_da_carta1);
    printf("Nome da cidade: %s\n", nome_da_cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", PIB1);
    printf("Pontos turísticos: %d\n", numero_de_pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per capita: R$ %.2f\n", PIB_per_capita1);
    printf("Super poder carta n.º 1: %.2f\n", super_poder1);

    printf("\n");

    printf("Carta n.º 2:\n");
    printf("\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigo_da_carta2);
    printf("Nome da cidade: %s\n", nome_da_cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", PIB2);
    printf("Pontos turísticos: %d\n", numero_de_pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per capita: R$ %.2f\n", PIB_per_capita2);
    printf("Super poder carta n.º 2: %.2f\n", super_poder2);
    
    printf("\n"); 

    // Comparação dos atributos entre as cartas
    printf("Comparação de cartas (Atributo: PIB):\n\n");
    
    printf("Carta 1 - %s (%c): R$ %.2f bilhões\n", nome_da_cidade1, estado1, PIB1);
    printf("Carta 2 - %s (%c): R$ %.2f bilhões\n", nome_da_cidade2, estado2, PIB2);
    printf("\n"); 

    // PIB
    if (PIB1 > PIB2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade1);
    } else if (PIB1 < PIB2) { 
        printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
