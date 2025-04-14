#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

 int main() {
    int i = 1;
    int movimentocompleto = 1; //controlar o movimento em 'L'

  //Nivel Novato - Movimentação de peças
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
    //Criando loops aninhados
   do
   {
    for ( int i = 0; i < 2; i++)
    {
        printf("Cima\n"); //imprimindo 'cima' duas vezes
    }

    printf("Direita\n"); //imprimindo direita

   } while (movimentocompleto--);


    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
