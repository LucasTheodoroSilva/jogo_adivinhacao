# Jogo da Adivinhação

Um simples jogo de adivinhação implementado em C++. O jogador tenta adivinhar um número secreto e recebe pontos com base na proximidade do palpite em relação ao número secreto. O jogo possui três níveis de dificuldade: fácil, médio e difícil.

## Como Jogar

1. Ao iniciar o jogo, você será recebido com uma mensagem de boas-vindas e instruções.
2. Escolha o nível de dificuldade digitando a letra correspondente:
   - **F** para fácil (15 tentativas)
   - **M** para médio (10 tentativas)
   - **D** para difícil (5 tentativas)
3. Após selecionar o nível de dificuldade, o jogo começará.
4. A cada rodada, digite um número como seu palpite.
5. Com base no seu palpite, o jogo informará se você acertou, se o número secreto é maior ou menor que o palpite.
6. Continue adivinhando até acertar o número secreto ou esgotar o número de tentativas.
7. Ao final do jogo, você receberá uma mensagem indicando se venceu ou perdeu, juntamente com sua pontuação.

## Como Compilar e Executar

Certifique-se de ter um compilador C++ instalado em seu sistema. Recomenda-se o uso do [GCC](https://gcc.gnu.org/) ou [Clang](https://clang.llvm.org/).

1. Clone o repositório ou baixe o arquivo `jogo_da_adivinhacao.cpp`.
2. Abra o terminal e navegue até o diretório onde o arquivo `jogo_da_adivinhacao.cpp` está localizado.
3. Execute o seguinte comando para compilar o código:

   `g++ jogo_da_adivinhacao.cpp -o jogo_da_adivinhacao`

4. Após a conclusão da compilação, execute o programa:

   `./jogo_da_adivinhacao`

## Requisitos do Sistema

- Compilador C++ (GCC, Clang, etc.)




