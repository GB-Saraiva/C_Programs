#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int a, b;
    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("Digite dois n�meros para ver se s�o pares ou �mpares\n\n");

    printf("Digite o primeiro n�mero aqui: ");
    scanf("%d", &a);

    printf("Agora o segundo n�mero aqui: ");
    scanf("%d", &b);

    if (a % 2 == 0)
    {
        printf("\nResultado: \n%d � par e ", a);
    }
    else
    {
        printf("\nResultado: \n%d � �mpar e ", a);
    }

    if (b % 2 == 0)
    {
        printf("%d � par.\n\n", b);
    }
    else
    {
        printf("%d � �mpar.\n\n", b);
    }

    system("pause");
    return 0;
}