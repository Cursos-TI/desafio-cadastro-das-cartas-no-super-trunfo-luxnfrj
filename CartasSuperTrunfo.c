#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    int codigoDaCidade, pontosTuristicos, populacao;
    char nome[50];
    float area, PIB;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Digite o código da cidade: \n");
    scanf("%d", &codigoDaCidade);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontosTuristicos);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("O código da cidade é: %d\n", codigoDaCidade);
    printf("O nome da cidade é: %s\n", nome);
    printf("A população da cidade é: %d\n", populacao);
    printf("A área da cidade é: %f\n", area);
    printf("O PIB da cidade é: %f\n", PIB);
    printf("O número de pontos turísticos da cidade é: %d\n", pontosTuristicos);
    
    return 0;
}
