/******************************************************************************

Faça um programa que imprima o menor entre dois números. Se os números forem iguais, imprima
“Valores iguais”.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n1;
    int n2;
    
    printf("Digite dois números:");
    scanf ("%d %d", &n1, &n2);
    
    if (n1<n2) {
        printf("O menor número é: %d", n1);
    }
    else if (n1==n2) {
        printf("Valores Iguais!");
    }
    
    else {
        printf ("O menor número é: %d", n2);
    }
    return 0;
}
