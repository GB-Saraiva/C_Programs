#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int A[10], B[10], C[10], D[10];

int Armazena_AB(int k)
{
    int cont = 0;

    printf("Digite abaixo os valores do vetor \"A\"\n");
    for (cont = 0; cont < k; cont++) // Armazena vetor A.
    {
        scanf("%d", &A[cont]);
    }
    printf("Digite abaixo os valores do vetor \"B\"\n");
    for (cont = 0; cont < k; cont++) // Armazena vetor B.
    {
        scanf("%d", &B[cont]);
    }
    for (cont = 0; cont < k; cont++) // Armazena vetor D.
    {
        if (cont % 2 == 0)
        {
            D[cont] = A[cont];
            D[cont + 1] = B[cont];
        }
        else // Armazena vetor C.
        {
            C[cont - 1] = A[cont];
            C[cont] = B[cont];
        }
    }

    system("pause");
    system("cls");
    return 0;
}

int Menor_Multiplo5(int k)
{
    int menor = 0;
    int cont = 0;

    if (k % 2 == 0)
    {
        for (cont = 0; cont < k; cont++)
        {
            if (D[cont] % 5 == 0)
            {
                if (menor == 0)
                {
                    menor = D[cont];
                }
                else if (D[cont] < menor)
                {
                    menor = D[cont];
                }
            }
        }
    }
    else
    {
        for (cont = 0; cont < k + 1; cont++)
        {
            if (D[cont] % 5 == 0)
            {
                if (menor == 0)
                {
                    menor = D[cont];
                }
                else if (D[cont] < menor)
                {
                    menor = D[cont];
                }
            }
        }
    }

    return menor;
}

float Media_Multiplo11(int k)
{
    int qtd = 0;
    int soma = 0;
    int cont = 0;
    float media = 0;

    if (k % 2 == 0)
    {
        for (cont = 0; cont < k; cont++)
        {
            if (C[cont] % 11 == 0)
            {
                soma = soma + C[cont];
                qtd = qtd + 1;
            }
        }
    }
    else
    {
        for (cont = 0; cont < k - 1; cont++)
        {
            if (C[cont] % 11 == 0)
            {
                soma = soma + C[cont];
                qtd = qtd + 1;
            }
        }
    }
    media = soma / qtd;

    return media;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int k;
    int cont;

    printf("Qual será o tamanho dos vetores\?\n");
    do
    {
        scanf("%d", &k);
        if (k < 5 || k > 20)
        {
            printf("(tamanho do vetor deve ser entre 5 e 20)\nDigite novamente o tamanho dos vetores:\n");
        }
    } while (k < 5 || k > 20);

    printf("\nTamanho escolhido para os vetores \"A\" e \"B\": %d\n", k);
    system("pause");
    system("cls");

    Armazena_AB(k);
    printf("Valores no vetor A\n"); // Mostra A
    for (cont = 0; cont < k; cont++)
    {
        printf("%d\n", A[cont]);
    }

    printf("Valores no vetor B\n"); // Mostra B
    for (cont = 0; cont < k; cont++)
    {
        printf("%d\n", B[cont]);
    }

    printf("Valores no vetor C\n"); // Mostra C
    if (k % 2 == 0)
    {
        for (cont = 0; cont < k; cont++)
        {
            printf("%d\n", C[cont]);
        }
    }
    else
    {
        for (cont = 0; cont < k - 1; cont++)
        {
            printf("%d\n", C[cont]);
        }
    }

    printf("Valores no vetor D\n"); // Mostra D
    if (k % 2 == 0)
    {
        for (cont = 0; cont < k; cont++)
        {
            printf("%d\n", D[cont]);
        }
    }
    else
    {
        for (cont = 0; cont < k + 1; cont++)
        {
            printf("%d\n", D[cont]);
        }
    }

    int menor = Menor_Multiplo5(k);
    if (menor == 0)
    {
        printf("Não foi digitado nenhum múltiplo de 5.\n");
    }
    else
    {
        printf("O menor multiplo de 5 encontrado nos vetores é: %d\n", menor);
    }

    float media = Media_Multiplo11(k);
    if (media == 0)
    {
        printf("Não foi digitado nenhum múltiplo de 11.\n");
    }
    else
    {
        printf("A média dos números multiplos de 11 encontrados nos vetores é: %2.f\n", media);
    }

    system("pause");
    return 0;
}