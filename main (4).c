/******************************************************************************

Crie um programa que calcule a soma dos números pares de 2 até n, sendo n um valor fornecido pelo
usuário usando um loop "for ou while".

*******************************************************************************/
#include <stdio.h>

int main()
{
    int soma=0;
    int numUsuario;
    int num=2;
    
    printf("Digite um número:");
    scanf("%d", &numUsuario);
    
    while (num<=numUsuario){
        if(num %2 == 0){
            soma += num;
        }
        num++;
    }
    
    printf ("A soma dos números pares são: %d", soma);
    

    return 0;
}
