/******************************************************************************

Faça um programa que imprima o maior entre dois números. Se os números forem iguais, imprima
“Valores iguais”.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n1;
    int n2;
    
    printf("Digite dois números:");
    scanf("%d %d", &n1, &n2);
    
    for (int i=0; i<1; i++){
        if (n1>n2){
            printf("O maior é %d", n1);
        }
        else if (n1==n2){
            printf("Valores iguais!");
        }
        else{
            printf("O maior valor é %d", n2);
        }
    }
    

    return 0;
}
