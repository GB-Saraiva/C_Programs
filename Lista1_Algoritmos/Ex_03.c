#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float n1 = 0, n2 = 0, n3 = 0, n4 = 0, media = 0;
    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("veja a média de 4 notas.\n\n");
    do
    {
        printf("Digite a primeira nota: ");
        scanf("%f", &n1);

        if (n1 < 0 || n1 > 10)
        {
            printf("Digite uma nota válida!!\n\n");
        }
    } while (n1 < 0 || n1 > 10);

    do
    {
        printf("Digite a segunda nota: ");
        scanf("%f", &n2);

        if (n2 < 0 || n2 > 10)
        {
            printf("Digite uma nota válida!!\n\n");
        }
    } while (n2 < 0 || n2 > 10);

    do
    {
        printf("Digite a terceira nota: ");
        scanf("%f", &n3);

        if (n3 < 0 || n3 > 10)
        {
            printf("Digite uma nota válida!!\n\n");
        }
    } while (n3 < 0 || n3 > 10);

    do
    {
        printf("Digite a quarta nota: ");
        scanf("%f", &n4);

        if (n4 < 0 || n4 > 10)
        {
            printf("Digite uma nota válida!!\n\n");
        }
    } while (n4 < 0 || n4 > 10);

    media = (n1 + n2 + n3 + n4) / 4;
    printf("\nSua nota final é %.2f", media);

    if (media < 6)
    {
        printf(", estude mais da próxima vez :( \n\n");
    }
    else
    {
        printf(" esqueça tudo passou DIRETO!! \n\n");
    }

    system("pause");
    return 0;
}