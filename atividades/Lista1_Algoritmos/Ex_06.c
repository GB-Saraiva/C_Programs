#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int n1, n2;
    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("Coloque dois n�meros e descubra qual o maior.\n\n");

    printf("Digite o primeiro n�mero aqui: ");
    scanf("%d", &n1);

    printf("Agora o segundo n�mero aqui: ");
    scanf("%d", &n2);

    if (n1 > n2)
    {
        printf("O primeiro n�mero digitado (%d), � maior que o segundo (%d).\n\n", n1, n2);
    }
    else if (n2 > n1)
    {
        printf("O segundo n�mero digitado (%d), � maior que o primeiro (%d).\n\n", n2, n1);
    }
    else if (n1 == n2)
    {
        printf("Os n�meros digitados s�o iguais.\n\n");
    }

    system("pause");
    return 0;
}