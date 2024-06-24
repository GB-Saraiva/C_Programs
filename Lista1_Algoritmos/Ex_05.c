#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int a, b;
    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("Digite dois números para ver se são pares ou ímpares\n\n");

    printf("Digite o primeiro número aqui: ");
    scanf("%d", &a);

    printf("Agora o segundo número aqui: ");
    scanf("%d", &b);

    if (a % 2 == 0)
    {
        printf("\nResultado: \n%d é par e ", a);
    }
    else
    {
        printf("\nResultado: \n%d é ímpar e ", a);
    }

    if (b % 2 == 0)
    {
        printf("%d é par.\n\n", b);
    }
    else
    {
        printf("%d é ímpar.\n\n", b);
    }

    system("pause");
    return 0;
}