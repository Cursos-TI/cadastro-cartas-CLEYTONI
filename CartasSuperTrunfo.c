#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

     // Variaveis criadas para armazena dados da carta 1
    char UF1;
    char codigo_carta1[5];
    char nome_cidade1[20];
    int populacao1;
    float area1;
    float PIB1;
    int qtd_pontos_turisticos1;

    // Variaveis criadas para armazena dados da carta 2
    char UF2;
    char codigo_carta2[5];
    char nome_cidade2[20];
    int populacao2;
    float area2;
    float PIB2;
    int qtd_pontos_turisticos2;

  // Área para entrada de dados

    printf("Bem vindo ao Super Trunfo/n");
    printf("Vamos iniciar o cadastro de duas cartas, atenção as informações/n");
    // Lendo os dados da primeira carta
    printf("Vamos cadastrar os dados da Carta 1\n");
    printf("Estado (Uma letra de A a H): ");
    scanf(" %c", &UF1);
    printf("Código da Carta (Número de 01 a 04): ");
    scanf("%s", &codigo_carta1);

    // Limpar Buffer
    scanf("%*c");

    printf("Nome da Cidade: ");
    fgets(nome_cidade1, sizeof(nome_cidade1), stdin); // fgest(variavel, tamanho da bariavel de forma dinamica, stdin)
    nome_cidade1[strcspn(nome_cidade1, "\n")] = 0;

    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área(KM²): ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &PIB1);
    printf("Numero de pontos turísticos: ");
    scanf("%d", &qtd_pontos_turisticos1);

    printf("Cadastro da primeira carta armazenado com sucesso!\n");

    printf("===========================\n");
    // Lendo os dados da segunada carta

    printf("Agora Vamos cadastrar os dados da Carta 2: \n");
    printf("Estado (Uma letra de A a H): ");
    scanf(" %c", &UF2);
    printf("Código da Carta (A letra + número de 01 a 04): ");
    scanf("%s", codigo_carta2);

    scanf("%*c"); // E essa foi forma que achei para contorna um bug em que ele pulava a opção do scanf sem fugir muito do
    // do conceito do desafio

    // Na aula o professor citou o fgets para pesquisarmos, adotei essa função por causa da limitaçãodo Scanf com nomes compostos
    printf("Nome da Cidade: ");
    fgets(nome_cidade2, sizeof(nome_cidade2), stdin);
    nome_cidade2[strcspn(nome_cidade2, "\n")] = 0;

    
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área(KM²): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &PIB2);
    printf("Numero de pontos turísticos: ");
    scanf("%d", &qtd_pontos_turisticos2);

  // Área para exibição dos dados da cidade

    printf("===========================\n");

    printf("CARTA 1\n");
    printf("Estado: %c\n", UF1);
    printf("Código: %s\n", codigo_carta1);
    printf("Nome da CiadaDe: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f KM²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", qtd_pontos_turisticos1);

    printf("===========================\n");

    printf("CARTA 2\n");
    printf("Estado: %c\n", UF2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da Ciadae: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f KM²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", qtd_pontos_turisticos2);

return 0;
} 