#include <stdio.h>

void calculateSec()
{
    printf("\nCalcular dias, horas y minutos en segundos\n");

    int days = 0;
    printf("Escriba los dias: ");
    scanf("%i", &days);

    int hours = 0;
    printf("Escriba las horas: ");
    scanf("%i", &hours);

    int mins = 0;
    printf("Escriba los minutos: ");
    scanf("%i", &mins);

    int result = days * 24 * 60 * 60;
    result += hours * 60 * 60;
    result += mins * 60;

    printf("\n==================================================\n");
    printf("El resultado en segundos es: ");
    printf("%i", result);
    printf("\n==================================================\n\n");
}

void calculateMedia()
{
    printf("\nCalcular media de 5 numeros\n");
    int sum = 0;
    printf("\n==================================================\n");
    for (int i = 0; i < 5; i++)
    {
        int num = 0;
        printf("%i", i + 1);
        printf(" - Inserte un numero: ");
        scanf("%i", &num);
        sum += num;
    }
    printf("\nLa media es: ");
    printf("%i", sum / 5);
    printf("\n==================================================\n\n");
}

void checkTrueOrFalse()
{
    printf("\n==================================================\n");
    int a = 5;
    int b = 6;
    int c = 7;
    int d = 8;

    printf("\nEl resultado de (a < b && c > d) || (a > b && c < d) es: ");
    if ((a < b && c > d) || (a > b && c < d))
    {
        printf("%s", "verdadera\n");
    }
    else
    {
        printf("%s", "falso\n");
    }
    printf("\n==================================================\n");
}

int main()
{
    calculateSec();
    calculateMedia();
    checkTrueOrFalse();
    return 0;
}