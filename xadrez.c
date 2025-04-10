#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

 int main() {
    int i = 1;
  
   //movendo a torre 5 casas para a direita
    for (int i = 0; i < 5; i++)
    {
        printf ("Direita\n"); //imprimindo a direção do movimento
    }
    
   //movendo a bispo 4 casas para a cima, direita
 do
 {
    printf("Cima, Direita\n");//imprimindo a direção do movimento

    ++i;
 } while (i <= 4);

  //movendo a rainha 8 casas para a esquerda
 while (i <= 8)
 {
   printf("Esquerda\n");//imprimindo a direção do movimento

   i++;
 }
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
