/******************************************************************************

Escreva um programa que encontre o maior número em uma lista de números fornecidos pelo usuário
usando um loop "while".

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num, maior, quantidade;
    int count=1; 
    
    printf ("Quantos números você quer digitar?");
    scanf("%d", &quantidade);
    
    printf ("Digite o numero 1: ");
    scanf("%d", &num);
    
    maior=num;
    
    while (count<quantidade){
        printf("Digite o número %d:", count + 1);
        scanf("%d", &num);
    
    if (num > maior){
        maior = num;
    }

    count++;
    }
    
    printf("O maior número é: %d", maior);
    
    return 0;
}
