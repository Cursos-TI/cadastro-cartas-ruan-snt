#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

    char estado;
    char codigo[4];
    char cidade[10];
    int populacao;
    float area;
    float pib;
    int pontos_tr;

    char estado_2;
    char codigo_2[4];
    char cidade_2[10];
    int populacao_2;
    float area_2;
    float pib_2;
    int pontos_tr2;

  // Área para entrada de dados
    
    printf("Cidade 1:\n");
    
    printf("Digite uma letra representando seu estado: ");
    scanf("%c", &estado);

    printf("\nAgora digite a letra que escolheu e em seguida, um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", &codigo);
    
    printf("\nAgora digite o nome da cidade: ");
    scanf("%s", &cidade);

    printf("\nAgora digite o número que representa o tamanho da população do seu estado: ");
    scanf("%d", &populacao);

    printf("\nAgora digite o número que corresponde a área da cidade (km²): ");
    scanf("%f", &area);

    printf("\nAgora digite o número que corresponde o Pib da cidade: ");
    scanf("%f", &pib);

    printf("\nAgora digite a quantidade de pontos turistico da sua cidade: ");
    scanf("%d", &pontos_tr);
  
  // Área para entrada de dados cidade 2
  
  printf("\nCidade 2:\n");
  
  printf("Digite uma letra representando seu estado: ");
    scanf("%s", &estado_2);

    printf("\nAgora digite a letra que escolheu e em seguida, um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", &codigo_2);
    
    printf("\nAgora digite o nome da cidade: ");
    scanf("%s", &cidade_2);

    printf("\nAgora digite o número que representa o tamanho da população do seu estado: ");
    scanf("%d", &populacao_2);

    printf("\nAgora digite o número que corresponde a área da cidade (km²): ");
    scanf("%f", &area_2);

    printf("\nAgora digite o número que corresponde o Pib da cidade: ");
    scanf("%f", &pib_2);

    printf("\nAgora digite a quantidade de pontos turistico da sua cidade: ");
    scanf("%d", &pontos_tr2);
  
    // Área para exibição dos dados da cidade 1

printf("\nCarta 1:\n");

printf("Estado: %c", estado);
printf("\nCódigo do estado: %s", codigo);
printf("\nNome da cidade: %s", cidade);
printf("\nPopulação: %d", populacao);
printf("\nArea: %f (km²)", area);
printf("\nPib da cidade: %f", pib);
printf("\npontos turisticos: %d", pontos_tr);

  // Área para exibição dos dados da cidade_2

prinf("\nCarta 2:\n");

prinf("Estado: %s", estado_2);
prinf("\nCódigo do estado: %s", codigo_2);
prinf("\nNome da cidade: %s", cidade_2);
printf("\nPopulação: %d", populacao_2);
printf("\nArea: %f (km²)", area_2);
printf("\nPib da cidade: %f", pib_2);
printf("\nPontos turisticos: %d", pontos_tr2);

return 0;
} 
