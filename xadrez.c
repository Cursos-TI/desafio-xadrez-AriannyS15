#include <stdio.h>

void movertorre(int casas){
  if (casas > 0){
    printf("Direita\n");
    movertorre(casas - 1);
  }
}

void moverbispo(int casas){
  if (casas > 0){
    printf("Cima, Direita\n");
    moverbispo(casas - 1);
  }
}

void moverrainha(int casas){
  if (casas > 0){
    printf("Esquerda\n");
    moverrainha(casas - 1);
  }
}

void movercavalo(int casas){
 for (int i = 1; i <= 3; i++) {
     if (i < 3) {
         printf("Cima\n");
         continue;  
     }
     if (i == 3) {
         printf("Direita\n");
         break; 
     }
     printf("%d\n", i);
 }

}

 int main() {
  printf("***Torre***\n");
  movertorre(5);
 
  printf("***Bispo***\n");
  moverbispo(4);

  printf("***Rainha***\n");
  moverrainha(8);

  printf("***Cavalo***\n");
  movercavalo(3);

  return 0;
}


    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

  

