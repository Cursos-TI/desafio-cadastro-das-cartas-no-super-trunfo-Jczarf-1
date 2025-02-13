#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste Larissa

int main() {

    // Declaração de Variáveis:

    // Aqui é a variável que representa e recebe o nome do estado.
    char estado; 
    
    // Aqui é a variável que vai receber o código da carta.
    char codigo_carta[5];

    /* Declaração da variável do nome da cidade, com quantidade máxima de arrays [18], 
    pois representa o máximo de caracteres que o Brasil tem de caracteres, são 17, porém coloquei 18 para ser o caractere nulo '\0'.
    */
    char nome_cidade[18]; 
    
    // Aqui é a variável que representa e recebe a quantidade da população.
    int qtd_populacao;
    
    // Aqui é a variável que representa e recebe a área em km quadrado.
    float area_km; 
    
    // Aqui é a variável que representa e recebe o PIB do estado. 
    float pib; 
    
    // Aqui é a variável que representa e recebe a quantidade de pontos turísticos.
    int qtd_ponto_turisticos; 

    /* Aqui é solicitado ao usuário o estado e o armazena na variável estado, 
    declarada logo acima. Linha (14). */  
    printf("Digite o estado (A-H) ");
    scanf(" %c", &estado);
    
    /* Aqui é solicitado ao usuário o código da carta e o armazena na variável codigo_carta, 
    declarada logo acima. Linha (17). */     
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo_carta);

    /* Aqui é solicitado ao usuário o nome da cidade e o armazena na variável nome_cidade, 
    declarada logo acima. Linha (22). */  
    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade);

    /* Aqui é solicitado ao usuário a população da carta e o armazena na variável qtd_populacao, 
    declarada logo acima. Linha (25). */  
    printf("Digite a quantidade da população: ");
    scanf("%d", &qtd_populacao);

    /* Aqui é solicitado ao usuário a área da carta e o armazena na variável area_km, 
    declarada logo acima. Linha (28). */  
    printf("Digite a área em km2: ");
    scanf("%f", &area_km);

    /* Aqui é solicitado ao usuário o PIB da carta e o armazena na variável pib, 
    declarada logo acima. Linha (31). */        
    printf("Digite o PIB da carta: ");
    scanf("%f", &pib);

    /* Aqui é solicitado ao usuário a quantidade de pontos turísticos 
    e o armazena na variável qtd_ponto_turisticos, declarada logo acima. Linha (34). */        
    printf("Quantidade de pontos turísticos da carta: ");
    scanf("%d", &qtd_ponto_turisticos);

    // Impressão de saída para o usuário.
    printf("\nDados da Carta Cadastrada:\n");
    printf("Estado: %c \n", estado);
    printf("Código da carta: %s \n", codigo_carta);
    printf("Nome da cidade: %s \n", nome_cidade);
    printf("População: %d \n", qtd_populacao);
    printf("Área: %.2f km² \n", area_km);
    printf("PIB: R$ %.2f bilhões de reais \n", pib);
    printf("Número de pontos turísticos: %d \n", qtd_ponto_turisticos);

    printf(" \n Programa encerrado, cadastrado com sucesso! \n"  );



    return 0;
}