#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int n1, n2;
    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("Coloque dois números e descubra qual o maior.\n\n");

    printf("Digite o primeiro número aqui: ");
    scanf("%d", &n1);

    printf("Agora o segundo número aqui: ");
    scanf("%d", &n2);

    if (n1 > n2)
    {
        printf("O primeiro número digitado (%d), é maior que o segundo (%d).\n\n", n1, n2);
    }
    else if (n2 > n1)
    {
        printf("O segundo número digitado (%d), é maior que o primeiro (%d).\n\n", n2, n1);
    }
    else if (n1 == n2)
    {
        printf("Os números digitados são iguais.\n\n");
    }

    system("pause");
    return 0;
}