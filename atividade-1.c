#include <stdio.h>

int numero;

int soma = 3;

int main (){
    printf ("Olá, seja bem-vindo, digite um número para a soma.\n");
    scanf ("%d", &numero);
    printf ("Seu número foi %d\n", numero + soma);
}

