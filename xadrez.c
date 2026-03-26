#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    int i = 1;
    int movimentoL = 1; // Inclui o script para facilitar a movimentação do cavalo

    printf("Torre\n");    //Utilizei do-while para Torre
    
     do{
        printf("Direita\n", i);
        i++;
     } while (i <= 5);

    printf("Bispo\n");

     while(i <= 10){ //Utilizei while para Bispo
        printf("Cima\n", i);
        printf("Direita\n", i);  //Utilizei a constante 10 para fazer o movimento completo da peça
        i++;
     }

    printf("Rainha\n"); //Utilizei for para Rainha

     for(i=1; i <=8; i++){
        printf("Esquerda\n");
     }

    printf("Cavalo\n");

     while(movimentoL--){

        for(int i = 0; i <= 1; i++){
            printf("Baixo\n");
        }
        printf("\n"); // Utilizei para dar espaço na conclusão do movimento da peça
        printf("Esquerda\n");
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
