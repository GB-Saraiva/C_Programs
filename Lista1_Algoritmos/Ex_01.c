#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int x, suc, ant;
    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("encontre o sucessor e antecessor de qualquer número inteiro.\n\n");

    printf("Digite um número inteiro: ");
    scanf("\t %d", &x);

    suc = x + 1;
    ant = x - 1;

    printf("O antecessor de %d é %d ", x, ant);
    printf("e seu sucessor é %d. \n\n", suc);

    system("pause");
    return 0;
}