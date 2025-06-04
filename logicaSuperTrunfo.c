#include <stdio.h>
#include <string.h>

int main() {
    printf("Cadastro de cartas - Super Trunfo! \n");

    // Definindo tipos de dados e variáveis para as cartas
    char pais1[50], pais2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2, PIB1, PIB2;
    int numero_de_pontos_turisticos1, numero_de_pontos_turisticos2;
    float PIB_per_capita1, PIB_per_capita2;
    float densidade_demografica1, densidade_demografica2;

    // Coletando dados para a carta n.º 1
    printf("Insira os dados da primeira carta abaixo: \n");
    printf("Digite o nome do país: \n");
    scanf("%s", pais1);
    getchar();

    printf("Digite a quantidade populacional do pais: \n");
    scanf("%lu", &populacao1);
    getchar();

    printf("Digite a área da do pais em km²: \n");
    scanf("%f", &area1);
    getchar();

    printf("Digite o Produto Interno Bruto (PIB) em bilhões: \n");
    scanf("%f", &PIB1);
    getchar();

    printf("Digite o número de pontos turísticos do país: \n");
    scanf("%d", &numero_de_pontos_turisticos1);
    getchar();

    // Coletando dados para a carta n.º 2
    printf("\nInsira os dados da segunda carta abaixo: \n");
    printf("Digite o nome do país: \n");
    scanf("%s", pais2);
    getchar();

    printf("Digite a quantidade populacional do país: \n");
    scanf("%lu", &populacao2);
    getchar();

    printf("Digite a área do país em km²: \n");
    scanf("%f", &area2);
    getchar();

    printf("Digite o Produto Interno Bruto (PIB) em bilhões: \n");
    scanf("%f", &PIB2);
    getchar();

    printf("Digite o número de pontos turísticos do país: \n");
    scanf("%d", &numero_de_pontos_turisticos2);
    getchar();

    // Cálculos derivados
    densidade_demografica1 = populacao1 / area1;
    PIB_per_capita1 = (PIB1 * 1e9) / populacao1;
    densidade_demografica2 = populacao2 / area2;
    PIB_per_capita2 = (PIB2 * 1e9) / populacao2;

    // Menu de seleção de atributos
    int atributo1, atributo2;
    float valor1_1, valor1_2, valor2_1, valor2_2;
    
    printf("\nMenu de Atributos para Comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - PIB per Capita\n");
    printf("6 - Densidade Demográfica\n");

    // Seleção do primeiro atributo
    printf("\nEscolha o primeiro atributo (1-6): ");
    scanf("%d", &atributo1);

    // Seleção do segundo atributo (diferente do primeiro)
    do {
        printf("Escolha o segundo atributo (1-6, diferente do primeiro): ");
        scanf("%d", &atributo2);
    } while(atributo2 == atributo1);

    // Atribuindo valores para comparação
    switch(atributo1) {
        case 1: valor1_1 = populacao1; valor1_2 = populacao2; break;
        case 2: valor1_1 = area1; valor1_2 = area2; break;
        case 3: valor1_1 = PIB1; valor1_2 = PIB2; break;
        case 4: valor1_1 = numero_de_pontos_turisticos1; valor1_2 = numero_de_pontos_turisticos2; break;
        case 5: valor1_1 = PIB_per_capita1; valor1_2 = PIB_per_capita2; break;
        case 6: valor1_1 = densidade_demografica1; valor1_2 = densidade_demografica2; break;
    }

    switch(atributo2) {
        case 1: valor2_1 = populacao1; valor2_2 = populacao2; break;
        case 2: valor2_1 = area1; valor2_2 = area2; break;
        case 3: valor2_1 = PIB1; valor2_2 = PIB2; break;
        case 4: valor2_1 = numero_de_pontos_turisticos1; valor2_2 = numero_de_pontos_turisticos2; break;
        case 5: valor2_1 = PIB_per_capita1; valor2_2 = PIB_per_capita2; break;
        case 6: valor2_1 = densidade_demografica1; valor2_2 = densidade_demografica2; break;
    }

    // Comparações individuais
    char* nome_atributo1, *nome_atributo2;
    int resultado1, resultado2;
    
    // Determina nomes dos atributos
    nome_atributo1 = (atributo1 == 1) ? "População" : 
                    (atributo1 == 2) ? "Área" :
                    (atributo1 == 3) ? "PIB" :
                    (atributo1 == 4) ? "Pontos Turísticos" :
                    (atributo1 == 5) ? "PIB per Capita" : "Densidade Demográfica";
    
    nome_atributo2 = (atributo2 == 1) ? "População" : 
                    (atributo2 == 2) ? "Área" :
                    (atributo2 == 3) ? "PIB" :
                    (atributo2 == 4) ? "Pontos Turísticos" :
                    (atributo2 == 5) ? "PIB per Capita" : "Densidade Demográfica";

    // Comparação considerando regras específicas
    resultado1 = (atributo1 == 6) ? (valor1_1 < valor1_2 ? 1 : (valor1_1 > valor1_2 ? 0 : -1))
                                 : (valor1_1 > valor1_2 ? 1 : (valor1_1 < valor1_2 ? 0 : -1));
    
    resultado2 = (atributo2 == 6) ? (valor2_1 < valor2_2 ? 1 : (valor2_1 > valor2_2 ? 0 : -1))
                                 : (valor2_1 > valor2_2 ? 1 : (valor2_1 < valor2_2 ? 0 : -1));

    // Cálculo da soma ponderada
    float soma1 = (resultado1 == 1 ? 1 : 0) + (resultado2 == 1 ? 1 : 0);
    float soma2 = (resultado1 == 0 ? 1 : 0) + (resultado2 == 0 ? 1 : 0);

    // Exibição dos resultados
    printf("\n--- Resultado da Comparação ---\n");
    printf("Países: %s vs %s\n", pais1, pais2);
    printf("Atributos comparados: %s e %s\n", nome_atributo1, nome_atributo2);
    
    printf("\n%s: %s %.2f vs %s %.2f\n", nome_atributo1, pais1, valor1_1, pais2, valor1_2);
    printf("%s: %s %.2f vs %s %.2f\n", nome_atributo2, pais1, valor2_1, pais2, valor2_2);
    
    printf("\nPontuação: %s (%.1f) vs %s (%.1f)\n", pais1, soma1, pais2, soma2);

    // Resultado final
    if(soma1 > soma2) {
        printf("\nResultado: %s venceu!\n", pais1);
    } else if(soma2 > soma1) {
        printf("\nResultado: %s venceu!\n", pais2);
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}
