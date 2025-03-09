#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
   //Definindo variaveis para a carta 1
    char cidade;
    char estado;
    char codigo[20];
    char nomeDaCidade[100];
    float populacao;
    float area;
    float PIB;
    int numeroDePontosTuristicos;

    //Definindo variaveis para a carta 2  
    char cidade2;
    char estado2;
    char codigo2[20];
    char nomeDaCidade2[100];
    float populacao2;
    float area2;
    float PIB2;
    int numeroDePontosTuristicos2;   
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Carta 1: \n");


    printf("Digite o estado: \n");
    scanf("%c", &estado);

    printf("Digite o código: \n");
    scanf("%s", &codigo);

    getchar();//Sitema para limpar o buffer de entrada, evitando conflito nas infomações.

    printf("Digite o nome da cidade: \n");
    fgets( nomeDaCidade, sizeof(nomeDaCidade), stdin);//Utilizando o fgets para o sistema ler tambem os espaços, e assim le mais de uma palavra.
    
    printf("Digite o número da população: \n");
    scanf("%f", &populacao);

    printf("Digite o Tamanho da Área: \n");
    scanf("%f", &area);

    printf("Digite o número do PIB: \n");
    scanf("%f", &PIB);

    printf("digite o numero de pontos turísticos: \n");
    scanf("%d", &numeroDePontosTuristicos);

    getchar();//Limpando o buffer de entrada, para novas informações.

    printf("Carta 2:");

    printf("Digite o estado: \n");
    scanf("%c", &estado2);

    printf("Digite o código: \n");
    scanf("%s", &codigo2);

    getchar();//limpando o buffer para poder ler corretamente a proximaentrada.

    printf("Digite o nome da Cidade: \n");
    fgets(nomeDaCidade2, sizeof(nomeDaCidade2), stdin);

    printf("Digite o número da População: \n");
    scanf("%f", &populacao2);

    printf("Digite o número da área: \n");
    scanf("%f", &area2);

    printf("Digite o número do PIB: \n");
    scanf("%f", &PIB2),

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numeroDePontosTuristicos2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //exibindo os dados da carta 1, um por linha.
    printf ("carta 1: \n");
    
    printf("Estado: %c\n", estado);

    printf("Código: %s\n", codigo);

    printf("Nome da Cidade: %s\n", nomeDaCidade);

    printf("População: %.3f\n", populacao);

    printf("Área: %.3f\n", area);

    printf("PIB: %.3f\n", PIB);

    printf("Número de Pontos Turísticos: %i\n", numeroDePontosTuristicos);

    //exibindo os dados da carta 2, um por linha.
    printf("Carta 2: \n");

    printf("Estado: %c\n", estado2);

    printf("Código: %s\n", codigo2);

    printf("Nome da Cidade: %s\n", nomeDaCidade2);

    printf("População: %.3f\n", populacao2);

    printf("Área: %.3f\n", area2);

    printf("PIB: %.3f\n", PIB2);

    printf("Número de pontos Turísticos: %d\n", numeroDePontosTuristicos2);


    return 0;//retornando o valor zero para informar que foi bem sucedido.
}
