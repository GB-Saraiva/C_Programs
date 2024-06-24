#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

char nome[50][20];
int idade[50];
float media_alunos[50];

void Armazena(int k)
{
    printf("Digite abaixo o nome e idade de cada aluno(a).\n");

    for (int i = 0; i < k; i++) // ARMAZENA NOME E IDADE.
    {
        printf("Nome do(a) %dº aluno(a): ", i + 1);
        scanf("%s", nome[i]);
        fflush(stdin);

        printf("Idade do(a) %dº aluno(a): ", i + 1);
        scanf("%d", &idade[i]);
    }

    

    system("pause");
    system("cls");
    for (int i = 0; i < k; i++) // MOSTRA NÚMERO, NOME, IDADE.
    {
        printf("O(a) aluno(a) nº%d: %s tem %d anos.\n", i + 1, nome[i], idade[i]);
    }
    system("pause");
    system("cls");

    
}

void Media(int k)
{
    float nota1[50], nota2[50], nota3[50], nota4[50];

    printf("Digite abaixo as quatro(4) notas de cada aluno(a)\n");
    for (int i = 0; i < k; i++) // ARMAZENA AS 4 NOTAS DE CADA ALUNO.
    {
        printf("notas do(a) aluno(a) %s.\n", nome[i]);

        printf("1ª nota: "); // NOTA 1.
        scanf("%f", &nota1[i]);
        if (nota1[i] < 0 || nota1[i] > 10)
        {
            printf("!!Nota deve ser entre zero(0) e dez(10)!!\nDigite novamente a 1ª nota: ");
            scanf("%f", &nota1[i]);
        }
        while (nota1[i] < 0 || nota1[i] > 10)
            ;

        printf("2ª nota: "); // NOTA 2.
        scanf("%f", &nota2[i]);
        if (nota2[i] < 0 || nota2[i] > 10)
        {
            printf("!!Nota deve ser entre zero(0) e dez(10)!!\nDigite novamente a 2ª nota: ");
            scanf("%f", &nota2[i]);
        }
        while (nota2[i] < 0 || nota2[i] > 10)
            ;

        printf("3ª nota: "); // NOTA 3.
        scanf("%f", &nota3[i]);
        if (nota3[i] < 0 || nota3[i] > 10)
        {
            printf("!!Nota deve ser entre zero(0) e dez(10)!!\nDigite novamente a 3ª nota: ");
            scanf("%f", &nota3[i]);
        }
        while (nota3[i] < 0 || nota3[i] > 10)
            ;

        printf("4ª nota: "); // NOTA 4.
        scanf("%f", &nota4[i]);
        if (nota4[i] < 0 || nota4[i] > 10)
        {
            printf("!!Nota deve ser entre zero(0) e dez(10)!!\nDigite novamente a 4ª nota: ");
            scanf("%f", &nota4[i]);
        }
        while (nota4[i] < 0 || nota4[i] > 10)
            ;
    }

    for (int i = 0; i < k; i++) // FAZ A MEDIA DE CADA ALUNO.
    {
        media_alunos[i] = (nota1[i] + nota2[i] + nota3[i] + nota4[i]) / 4;
    }

    system("pause");
    system("cls");

    

    printf("Média do(a) aluno(a):\n");
    for (int i = 0; i < k; i++) // MOSTRA NÚMERO, NOME, MEDIA E CONCEITO.
    {
        printf("nº%d, %s: %.2f ", i + 1, nome[i], media_alunos[i]);

        if (media_alunos[i] >= 9.0)
        {
            printf("Nota A\n");
        }
        else if (media_alunos[i] >= 7.0)
        {
            printf("Nota B\n");
        }
        else if (media_alunos[i] >= 5.0)
        {
            printf("Nota C\n");
        }
        else
        {
            printf("Nota D\n");
        }
    }

    system("pause");

    
}

float Maior_Media(int k)
{
    float maior = media_alunos[0];

    for (int i = 1; i < k; i++) // ENCONTRA A MAIOR MÉDIA.
    {
        if (media_alunos[i] > maior)
        {
            maior = media_alunos[i];
        }
    }
    return maior;
}

void ExibaAlunos_Maior_Media(int k, float maior)
{
    printf("Aluno(s) com a maior media(%.2f):\n", maior);
    for (int i = 0; i < k; i++) // EXIBE ALUNOS COM A MAIOR MÉDIA.
    {
        if (media_alunos[i] == maior)
        {
            printf("nº%d %s\n", i + 1, nome[i]);
        }
    }
}

int main()
{
    int k;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite a quantidade de alunos que deseja cadastrar: ");
    scanf("%d", &k);

    while (k < 5 || k > 50)
    {
        system("cls");
        printf("!!Quantidade de alunos deve ser entre cinco(5) e cinquenta(50)!!\nDigite novamente:");
        scanf("%d", &k);
    }

    Armazena(k);
    Media(k);
    float maior = Maior_Media(k);
    ExibaAlunos_Maior_Media(k, maior);

    system("pause");
    return 0;
}