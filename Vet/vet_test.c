// trabalho em sala com o L.Covas

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int A[50], B[50],

    int Cadastro(int k)
{
    int cont = 0;

    printf("digite abaixo o tamanho dos vetores A\n:");
    for (cont = 0; cont < k; cont++) // Armazena vetor A.
    {
        scanf("%d", &A[cont]);
    }

    printf("Digite abaixo os valores do vetor \"B\"\n");
    for (cont = 0; cont < k; cont++) // Armazena vetor B.
    {
        scanf("%d", &B[cont]);
    }
    system("pause");
    system("cls");
    return 0;
}

int Pares_Divisiveis5()
{
}

int main()
{
    int k;
    setlocale(LC_ALL, "Portuguese");

    printf("Qual será o tamanho dos vetores?")
}