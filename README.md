# 🎮Desafio Super Trunfo - Países

Este é um jogo baseado no Super Trunfo, onde o jagador compara duas cartas e identifica qual é a vencedora.

## ⚙️ Funcionalidades do Sistema:

*   O sistema permitirá ao usuário cadastrar os dados de **duas** cartas manualmente via terminal.
*   Após o cadastro, o sistema exibirá os dados de cada cidade de forma organizada.
*   O sistema irá disponibilizar um menu de interação aonde o jogador vai escolher uma das opções para comparação. 

🚩 **Objetivo:** Criar um programa em C que cadastra **duas** cartas e comparar os atributos:
  - Estado
  - Código
  - Nome da cidade
  - População
  - Área
  - PIB
  - Número de pontos turísticos
- Cálculo de:
  - Densidade populacional
  - PIB per capita
  - Super poder (uma pontuação calculada com base nos atributos da cidade)
- Menu interativo que permite ao usuário comparar os atributos das cidades.


📥 **Entrada** e 📤 **Saída de Dados:**

*   O usuário insere os dados de cada carta interativamente via `scanf`.
*   O programa exibe os dados cadastrados usando `printf`, com cada atributo em uma nova linha.

## Atributos para Comparação

No jogo, o usuário pode comparar as cartas de duas cidades nos seguintes atributos:

1. **População** - O número de habitantes da cidade.
2. **Área** - A área da cidade em quilômetros quadrados (km²).
3. **PIB** - O Produto Interno Bruto da cidade em bilhões de reais.
4. **Número de Pontos Turísticos** - O número de pontos turísticos conhecidos na cidade.
5. **Densidade Populacional** - A quantidade de habitantes por km² (menor densidade ganha).
6. **PIB per Capita** - O PIB dividido pela população, resultando no PIB por habitante.
7. **Super Poder** - Uma pontuação calculada a partir de todos os atributos combinados.

## 🆕Como Compilar e Executar

### Passo 1: Compilação

1. Clone este repositório em sua máquina:
   ```bash
   git clone https://github.com/SEU_USUARIO/super-trunfo-paises.git
📥 **Entrada** e 📤 **Saída de Dados:**

*   Mesma entrada do nível Novato.
*   A saída exibirá também os atributos calculados.

**Simplificações para o Nível Intermediário:**

*   Continue cadastrando apenas **duas** cartas.
*   Continue **sem usar** laços (`for`, `while`) ou condicionais (`if`, `else`).

2. Navegue até o diretório do projeto:
 ``bash
cd super-trunfo-paises``

3. Compile o código C:
   ``bash
   gcc -o super_trunfo super_trunfo.c``

### Passo 2: Execução
execute o programa compilado:
``bash
./super_trunfo``

### Passo 3: Interação
1. O programa solicitará que você insira os dados de duas cidades (Cidade 
   1 e Cidade 2), incluindo o estado, código, nome da cidade, população, 
   área, PIB, e número de pontos turísticos.

2. Após inserir as informações de ambas as cidades, o programa exibirá os 
   dados e oferecerá um menu de opções para comparação entre os atributos 
   das cidades.

## Menu de Comparação
O menu de comparação permite que o jogador escolha qual atributo deseja comparar. As opções disponíveis são:

1. **População** - Compare a população das duas cidades.

2. **Área** - Compare a área das duas cidades.

3. **PIB** - Compare o PIB das duas cidades.

4. **Número de Pontos Turísticos** - Compare o número de pontos turísticos das 
   duas cidades.

5. **Densidade Populacional** - Compare a densidade populacional das duas 
   cidades (menor densidade ganha).

6. **PIB Per Capita** - Compare o PIB per capita das duas cidades.

7. **Super Poder** - Compare o super poder calculado a partir de todos os 
   atributos das cidades.
 

### Exemplo de Execução
1. Carta 1:
2. Digite o estado:
 SP
3. Digite o código:
12345
4. Digite o nome da cidade:
São Paulo
5. Digite o número da população:
12000000
6. Digite o Tamanho da Área:
1500.5
7. Digite o número do PIB:
1000
8. Digite o numero de pontos turísticos:
50

1. Carta 2:
2. Digite o estado:
RJ
3. Digite o código:
67890
4. Digite o nome da Cidade:
Rio de Janeiro
5. Digite o número da População:
6000000
6. Digite o número da área:
1200.3
7. Digite o número do PIB:
800
8. Digite o número de pontos turísticos:
30

1. População
2. Área
3. PIB
4. Número de Pontos Turísticos
5. Densidade Populacional
6. PIB Per Capita
7. Super Poder
Escolha qual atributo irá comparar:

*🏆 Após a escolha do atributo, o programa exibirá o resultado da comparação e indicará qual carta venceu.*


## 🏁 Conclusão
Este projeto é exclusivo para estudos e treinamento para entender as estruturas de códigos de switch, if-else, variáveis... 

Este `README.md` inclui instruções claras sobre como compilar, executar o programa e usar o menu interativo, além de explicar os atributos para comparação das cartas e fornecer um exemplo de execução.

