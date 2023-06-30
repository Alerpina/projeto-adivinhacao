#include <stdio.h>


int main (){
    
    // Imprime a menssagem de bem-vindo ao usuário
    printf ("**************************************\n");
    printf ("Bem-vindo ao nosso jogo de adivinhação\n");
    printf ("**************************************\n"); 

    int numerosecreto = 42;

    int chute;

    printf ("Qual é o seu chute? ");
    scanf("%d",&chute);
    printf ("Seu chute foi %d\n", chute);
}
