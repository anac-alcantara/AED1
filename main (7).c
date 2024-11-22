/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int idade;
    
    printf("Digite sua idade:");
    scanf("%d", &idade);
    
    if (idade <= 12){
        printf("Criança");
    } else if (idade >= 13 && idade <= 17){
        printf("Adolescente");
    } else if (idade >= 18 && idade <= 64){
        printf("Adulto");
    }else{
        printf("Idoso");
    }

    return 0;
}