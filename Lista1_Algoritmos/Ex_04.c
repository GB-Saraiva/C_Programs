// Leia dois valores a e b e os escreva com a mensagem: "São múltiplos" ou "Não são múltiplos".
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int n1, n2, result;
    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("analize se dois números são múltiplos ou não.\n\n");

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);

    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    result = n1 % n2;

    if (result == 0)
    {
        printf("Os números que você digitou são múltiplos.\n");
    }
    else
    {
        printf("Os números que você digitou não são múltiplos.\n\n");
    }

    system("pause");
    return 0;
}