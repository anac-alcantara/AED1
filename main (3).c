/******************************************************************************

Escreva um programa que solicite ao usuário um número e imprima os números de 1 até o número
inserido exceto os números múltiplos de 3, usando um laço de repetição.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int numUsuario;
   int num =1;
   
   printf ("Digite um número:");
   scanf("%d", &numUsuario);
   
   while (numUsuario >= num){
       if (num % 3 != 0) {
           printf ("%d\n", num);
       }
       num ++;
   }

    return 0;
}
