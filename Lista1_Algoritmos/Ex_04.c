// Leia dois valores a e b e os escreva com a mensagem: "S�o m�ltiplos" ou "N�o s�o m�ltiplos".
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int n1, n2, result;
    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("analize se dois n�meros s�o m�ltiplos ou n�o.\n\n");

    printf("Digite o primeiro n�mero: ");
    scanf("%d", &n1);

    printf("Digite o segundo n�mero: ");
    scanf("%d", &n2);

    result = n1 % n2;

    if (result == 0)
    {
        printf("Os n�meros que voc� digitou s�o m�ltiplos.\n");
    }
    else
    {
        printf("Os n�meros que voc� digitou n�o s�o m�ltiplos.\n\n");
    }

    system("pause");
    return 0;
}