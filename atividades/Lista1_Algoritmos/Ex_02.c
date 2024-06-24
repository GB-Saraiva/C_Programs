// Receba via teclado um número inteiro qualquer e exiba se ele é positivo, negativo ou zero.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int x;
    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("Eu digo se o número que você digitou é maior, menor ou igual a zero.\n\n");

    printf("digite o número aqui: ");
    scanf("%i", &x);

    if (x == 0)
    {
        printf("O número que você digitou é zero (0).\n");
    }
    else if (x > 0)
    {
        printf("O número que você digitou é positivo.\n");
    }
    else
    {
        printf("O número que você digitou é negativo\n");
    }

    system("pause");
    return 0;
}