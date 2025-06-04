#include <stdio.h>
#include <string.h>

int main() {

    printf("Cadastro de cartas - Super Trunfo! \n");


    int opcao;

    // Definindo tipos de dados e variáveis para a carta n.º 1

    char pais1[50];
    unsigned long int populacao1; 
    float area1;
    float PIB1;
    int numero_de_pontos_turisticos1;
    float PIB_per_capita1;
    float densidade_populacional1;
    
    
    // Coletando dados para a carta n.º 1
    printf("Insira os dados da primeira carta abaixo: \n");
    
    printf("Digite o nome do país: \n");
    scanf("%s", pais1);
    getchar(); // Limpa o buffer de entrada

    printf("Digite a quantidade populacional do pais: \n");
    scanf("%lu", &populacao1);
    getchar(); // Limpa o buffer de entrada

    printf("Digite a área da do pais em km² (máximo de duas casas decimais após o ponto. ex: 123.45): \n");
    scanf("%f", &area1);
    getchar(); // Limpa o buffer de entrada

    printf("Digite o Produto Interno Bruto (PIB) em escala de bilhões de R$ (máximo de duas casas decimais após o ponto. ex: 1.45): \n");
    scanf("%f", &PIB1);
    getchar(); // Limpa o buffer de entrada

    printf("Digite o número de pontos turísticos do país: \n");
    scanf("%d", &numero_de_pontos_turisticos1);
    getchar(); // Limpa o buffer de entrada

    // Definindo tipos de dados e variáveis para a carta n.º 2
    char pais2[50];
    unsigned long int populacao2; 
    float area2;
    float PIB2;
    int numero_de_pontos_turisticos2;
    float PIB_per_capita2;
    float densidade_populacional2;
    float super_poder2;

    printf("\n"); // Linha em branco para melhor visualização

    // Coletando dados para a carta n.º 2
    printf("Insira os dados da segunda carta abaixo: \n");
    
    printf("Digite o nome do país: \n");
    scanf("%s", pais2);
    getchar(); // Limpa o buffer de entrada

    printf("Digite a quantidade populacional do país: \n");
    scanf("%lu", &populacao2);
    getchar(); // Limpa o buffer de entrada

    printf("Digite a área do país em km² (máximo de duas casas decimais após o ponto. ex: 123.45): \n");
    scanf("%f", &area2);
    getchar(); // Limpa o buffer de entrada

    printf("Digite o Produto Interno Bruto (PIB) em escala de bilhões de R$ (máximo de duas casas decimais após o ponto. ex: 1.45): \n");
    scanf("%f", &PIB2);
    getchar(); // Limpa o buffer de entrada

    printf("Digite o número de pontos turísticos do país: \n");
    scanf("%d", &numero_de_pontos_turisticos2);
    getchar(); // Limpa o buffer de entrada

    printf("\n"); // Linha em branco para separar a coleta de dados da visualização

    // Cálculo de PIB per capita e densidade populacional
    densidade_populacional1 = populacao1 / area1;
    PIB_per_capita1 = (PIB1 * 1e9) / populacao1;

    densidade_populacional2 = populacao2 / area2;
    PIB_per_capita2 = (PIB2 * 1e9) / populacao2;

    // Criação do menu switch que possibilita ao usuario decidir qual atributo ele quer que seja comparado

    
    printf("Atributos das cartas disponiveis para comparação:\n");
    printf("1. População \n");
    printf("2. Área \n");
    printf("3. PIB \n");
    printf("4. Pontos turisticos \n");
    printf("5. PIB per capita");
    printf("6. Densidade demográfica \n");
    printf("Esolha um atributo numerico da lista acima para comparar: \n");
    printf("\n");
    scanf("%d", &opcao);
   
    // Criação do menu

    switch (opcao) {

    case 1:
 
    printf("Nome do país 1: %s \n", pais1);
    printf("Nome do páis 2: %s \n", pais2);
    printf("Atributo usado na comparação: População \n");
    printf("População da carta n.º 1: %lu \n", populacao1);
    printf("População da carta n.º 2: %lu \n", populacao2);
    
    if (populacao1 > populacao2) {
        printf("Carta n. 1 é a vencedora, pois tem a maior população!");
    } else if (populacao1 < populacao2) {
        printf("Carta . 2 é a vencedora, pois tem a maior população!");
    } else {
        printf("O jogo terminou empatado, pois os dois atributos são iguais!"); 
    }
    break;

    case 2:

    printf("Nome do país 1: %s \n", pais1);
    printf("Nome do páis 2: %s \n", pais2);
    printf("Atributo usado na comparação: Área \n");  
    printf("Área da carta n.º 1: %f", area1);
    printf("Área da carta n.º 2: %f", area2);
    
    if (area1 > area2) {
        printf("Carta n. 1 é a vencedora, pois tem a maior Área!");
    } else if (area1 < area2) {
        printf("Carta . 2 é a vencedora, pois tem a maior Área!");
    } else {
        printf("O jogo terminou empatado, pois os dois atributos são iguais!"); 
    }
    break;

    case 3:
   
    printf("Nome do país 1: %s \n", pais1);
    printf("Nome do páis 2: %s \n", pais2);
    printf("Atributo usado na comparação: PIB \n");
    printf("PIB da carta n.º 1: R$ %f", PIB1);
    printf("PIB da carta n.º 2: R$ %f", PIB2);
    
    if (PIB1 > PIB2) {
        printf("Carta n. 1 é a vencedora, pois tem o maior PIB!");
    } else if  (PIB1 < PIB2) {
        printf("Carta . 2 é a vencedora, pois tem o maior PIB!");
    } else {
        printf("O jogo terminou empatado, pois os dois atributos são iguais!"); 
    }
    break;

    case 4:

    printf("Nome do país 1: %s \n", pais1);
    printf("Nome do páis 2: %s \n", pais2);
    printf("Atributo usado na comparação: Pontos turisticos \n");
    printf("Numero de pontos turisticos da carta n.º 1: %d", numero_de_pontos_turisticos1);
    printf("Numero de pontos turisticos da carta n.º 2: %d", numero_de_pontos_turisticos2);
    
    if (numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2) {
        printf("Carta n. 1 é a vencedora, pois tem o maior numero de pontos turisticos!");
    } else if (numero_de_pontos_turisticos1 < numero_de_pontos_turisticos2) {
        printf("Carta . 2 é a vencedora, pois tem o maior numero de pontos turisticos!");
    } else {
        printf("O jogo terminou empatado, pois os dois atributos são iguais!"); 
    }
    break;

    case 5:

    printf("Nome do país 1: %s \n", pais1);
    printf("Nome do páis 2: %s \n", pais2);
    printf("Atributo usado na comparação: PIB per capita \n");
    printf("PIB per capita da carta n.º 1: %f", PIB_per_capita1);
    printf("PIB per capita da carta n.º 2: %f", PIB_per_capita2);

    if (PIB_per_capita1 > PIB_per_capita2) {
        printf("Carta n. 1 é a vencedora, pois tem o maior PIB!");
    } else if (PIB_per_capita1 < PIB_per_capita2) {
        printf("Carta . 2 é a vencedora, pois tem o maior PIB!");
    } else {
        printf("O jogo terminou empatado, pois os dois atributos são iguais!"); 
    }
    break;
 
    case 6:

    printf("Nome do país 1: %s \n", pais1);
    printf("Nome do páis 2: %s \n", pais2);
    printf("Atributo usado na comparação: Densidade demografica \n");
    printf("Densidade demografica da carta n.º 1: %f", densidade_populacional1);
    printf("Densidade demografica da carta n.º 2: %f", densidade_populacional2);
    
    if (densidade_populacional1 < densidade_populacional2) {
        printf("Carta n. 1 é a vencedora, pois tem a menor densidade populacional!");
    } else if (densidade_populacional1 > densidade_populacional2) {
        printf("Carta . 2 é a vencedora, pois tem a menor densidade populacional!");
    } else {
        printf("O jogo terminou empatado, pois os dois atributos são iguais!"); 
    }
    break;

    default:
    printf("Entrada invalida! Programa encerrado. Por favor, execute-o novamente.");
    return 0;
        
    }
    
    return 0;
    
}


