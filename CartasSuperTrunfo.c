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
    char cidade, estado, codigo[20], nomeDaCidade[100];
    float populacao, area, PIB;
    int numeroDePontosTuristicos;

    //Definindo variaveis para a carta 2  
    char cidade2, estado2, codigo2[20], nomeDaCidade2[100];
    float populacao2, area2, PIB2;
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

    printf("Carta 2: \n");

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
    scanf("%f", &PIB2);

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
    
    printf("População: %.2f\n", populacao);

    printf("Área: %.2f km²\n", area);

    printf("PIB: %.2f bilhões de reais\n", PIB);

    printf("Número de Pontos Turísticos: %i\n", numeroDePontosTuristicos);

    float densidadePopulacional= (double) populacao / area;// Operação irá calcular os dois valores e dividir
    float pibPerCapita = (PIB * 1.0e9) / populacao;//Operação irá dividir pib/população.
    

    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional);//irá apresentar o resultado da divisão
    printf("PIB per Capita: %.2f reais\n", pibPerCapita);//irá apresentar o resultado da divisão de pib/população

    //exibindo os dados da carta 2, um por linha.
    printf("Carta 2: \n");
    
    printf("Estado: %c\n", estado2);
    
    printf("Código: %s\n", codigo2);
    
    printf("Nome da Cidade: %s\n", nomeDaCidade2);
    
    printf("População: %.2f\n", populacao2);
    
    printf("Área: %.2f km²\n", area2);
    
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    
    printf("Número de pontos Turísticos: %d\n", numeroDePontosTuristicos2);
 
    float densidadePopulacional2 = (double) populacao2 / area2; //Operador de divisão
    float pibPerCapita2 = (PIB2 * 1.0e9) / populacao2; //operação de divisão

    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2); //Operação para mostrar o resultado
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2); //Operação para mostrar o resultado da divisão

    //Cálculo Super poder
    double superPoder1 = populacao + area + (PIB * 1.0e9) + numeroDePontosTuristicos + pibPerCapita + (1.0 / densidadePopulacional);
    double superPoder2 = populacao2 + area2 + (PIB2 * 1.0e9) + numeroDePontosTuristicos2 + pibPerCapita2 + (1.0 / densidadePopulacional2);

    //Comparação
    int resultadoPopulacao = populacao > populacao2;
    int resultadoArea = area > area2;
    int resultadoPib = PIB > PIB2;
    int resultadoPontosTuristicos = numeroDePontosTuristicos > numeroDePontosTuristicos2;
    int resultadoDensidade = densidadePopulacional < densidadePopulacional2; //Menor densidade ganha
    int resultadoPibPerCapita = pibPerCapita > pibPerCapita2;
    int resultadoSuperPoder = superPoder1 > superPoder2;

    // Exibição dos Resultados
        printf("\nComparação de Cartas:\n");
        printf("População: Carta %d venceu (%d)\n", resultadoPopulacao ? 1 : 2, resultadoPopulacao);
        printf("Área: Carta %d venceu (%d)\n", resultadoArea ? 1 : 2, resultadoArea);
        printf("PIB: Carta %d venceu (%d)\n", resultadoPib ? 1 : 2, resultadoPib);
        printf("Pontos Turísticos: Carta %d venceu (%d)\n", resultadoPontosTuristicos ? 1 : 2, resultadoPontosTuristicos);
        printf("Densidade Populacional: Carta %d venceu (%d)\n", resultadoDensidade ? 1 : 2, resultadoDensidade);
        printf("PIB per Capita: Carta %d venceu (%d)\n", resultadoPibPerCapita ? 1 : 2, resultadoPibPerCapita);
        printf("Super Poder: Carta %d venceu (%d)\n", resultadoSuperPoder ? 1 : 2, resultadoSuperPoder);


    return 0;//retornando o valor zero para informar que foi bem sucedido.
}
