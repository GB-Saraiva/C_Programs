#include<stdio.h>
#include<stdlib.h>
int main()
{float n1, n2, result;

    printf("Digite o primeiro numero: \n");
    scanf("%f", &n1);

    do
    {    printf("Digite um numero diferente de 0: \n");
         scanf("%f", &n2);

    if(n2==0)
    {printf("numero invalido. \n");}
    }while(n2==0);

    result=n1/n2;
    printf("o resultado da divisão eh: %f\n", result);

    return 0;
    }
