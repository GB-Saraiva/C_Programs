// Receba via teclado um n�mero inteiro qualquer e exiba se ele � positivo, negativo ou zero.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int x;
    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("Eu digo se o n�mero que voc� digitou � maior, menor ou igual a zero.\n\n");

    printf("digite o n�mero aqui: ");
    scanf("%i", &x);

    if (x == 0)
    {
        printf("O n�mero que voc� digitou � zero (0).\n");
    }
    else if (x > 0)
    {
        printf("O n�mero que voc� digitou � positivo.\n");
    }
    else
    {
        printf("O n�mero que voc� digitou � negativo\n");
    }

    system("pause");
    return 0;
}