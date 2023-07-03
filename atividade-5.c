#include <stdio.h>


int idadepermitida;

int main (){
    printf ("Bem-vindo, a festa qual sua idade?\n");
    scanf ("%d", &idadepermitida);
    
  if (idadepermitida >= 18)
    {
        printf("Você pode entrar, boas festas\n");
    }
    else{

        if(idadepermitida < 18) {
            printf ("Você não pode entrar, pois sua idade não é permitida\n");
        }
    }
}