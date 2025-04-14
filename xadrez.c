#include <stdio.h>
// Nível Mestre - Funções Recursivas e Loops Aninhados

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


  

  

