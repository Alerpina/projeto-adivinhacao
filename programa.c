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

    if (chute == numerosecreto)
    {
        printf("Parabéns ! Você acertou!\n");
    }
    else{

        if(chute > numerosecreto) {
            printf ("Seu chute foi maior que o número secreto\n");
        }

        if( chute < numerosecreto) {
            printf ("Seu número foi menor que o número secreto\n");
        }
    }
}
