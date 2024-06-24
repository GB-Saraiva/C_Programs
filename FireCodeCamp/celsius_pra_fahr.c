#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int lower, upper, step;
    float fahr, celsius;
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;
    celsius = lower;

    while (fahr <= upper)
    {
        celsius = (5.0 / 9.0) * (fahr - 32);
        printf("%4.0fC° \t %6.1fF°\n", fahr, celsius);
        fahr = fahr + step;
        celsius = celsius + step;
    }

    return 0;
}