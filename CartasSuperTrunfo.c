#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado;
    char codigo[20];
    char nomeDaCidade[50];
    float população;
    float area;
    float PIB;
    int numeroDePontosTuristicos;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o estado: \n");
    scanf("%c", &estado);

    printf("Digite o código: \n");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade: \n");
    fgets(nomeDaCidade,50,stdin);

    printf("Digite o número da população: \n");
    scanf("%d", &população);

    printf("Digite o Tamanho da Área: \n");
    scanf("%d", &area);

    printf("Digite o número do PIB: \n");
    scanf("%d", &PIB);

    printf("digite o numero de pontos turísticos: \n");
    scanf("%i", &numeroDePontosTuristicos);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Estado: %c\n", estado);

    printf("Código: %s\n", codigo);

    printf("Nome da Cidade: %s\n", nomeDaCidade);

    printf("População: %f\n", população);

    printf("Área: %f\n", area);

    printf("PIB: %f\n", PIB);

    printf("Número de Pontos Turísticos: %i\n", numeroDePontosTuristicos);

    return 0;
}
