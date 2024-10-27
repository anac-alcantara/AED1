/******************************************************************************

Escreva um programa que calcule a média de 4 notas de um aluno, imprima se o aluno foi aprovado,
caso média maior ou igual a 6, imprima reprovado se média menor que 6.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n1;
    int n2;
    int n3;
    int n4;
    int media;
    
    printf ("Digite suas 4 notas:");
    scanf ("%d %d %d %d", &n1, &n2, &n3, &n4);
    
    media = (n1+n2+n3+n4)/4;
    
        if (media>=6){
            printf("Aprovado!");
        }
        else {
            printf("Reprovado!");
        }
    
    
    

    return 0;
}
