#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

// escolha qual c�digo testar.
#define ex2

    /*FALAR SE DOIS NUMEROS SAO PARES OU IMPARES
       IF/ELSE*/
#ifdef ex1
    {
        int a, b;

        printf("digite o primeiro valor: \n");
        scanf("%d", &a);

        printf("digite o segundo valor: \n");
        scanf("%d", &b);

        if (a % 2 == 0)
        {
            printf("%d eh par e ", a);
        }
        else
        {
            printf("%d eh impar e ", a);
        }

        if (b % 2 == 0)
        {
            printf("%d eh par\n", b);
        }
        else
        {
            printf("%d eh impar\n", b);
        }
        return 0;
    }
#endif // ex1

    /*FALAR SE DOIS N�MEROS S�O PARES OU �MPARES
       SWITCH-CASE / SOMETHIN...*/
#ifdef ex2
    {
        int a, b, impar, par;
        printf("Digite o primeiro n�mero: ");
        scanf("%d", &a);

        printf("Digite o segundo n�mero: ");
        scanf("%d", &b);

        switch (a || b)
        {
        case /* constant-expression */:
            /* code */
            break;

        default:
            break;
        }

        system("pause");
        return 0;
    }
#endif // ex2

    /*MMC ENTRE DOIS NUMEROS / BIBLIOTECA ACENTUACAO
       FOR*/
#ifdef ex3
    {
        int a, n1, n2, resto;

        printf("digite dois n�meros: \n");
        scanf("%d %d", &n1, &n2);

        for (a = 1; a > 0; a++)
        {
            resto = (n1 * a) % n2;
            if (resto == 0)
                break;
        }
        printf("O MMC entre %d e %d �: %d\n", n1, n2, n1 * a);
        system("pause");
    }
#endif // ex3
}