#include <stdio.h>

void numCounter()
{
    printf("\nContando del 1-48\n");
    for (int i = 1; i <= 48; i++)
    {
        printf("%d, ", i);
    }
}

void numCountFromOneTox()
{
    printf("\n\nContando desde el 1 a x\n");
    printf("\nInserte un numero: ");
    int num = 0;
    scanf("%i", &num);

    for (int i = 1; i <= num; i++)
    {
        printf("%d, ", i);
    }
}

void numCountFromXtoY()
{
    printf("\n\nContando desde el y a x\n");
    printf("\nInserte el primer numero: ");
    int x = 0;
    scanf("%i", &x);

    printf("\nInserte el segundo numero: ");
    int y = 0;
    scanf("%i", &y);

    for (int i = x; i <= y; i++)
    {
        printf("%d, ", i);
    }
    printf("\n");
}

int main()
{
    numCounter();
    numCountFromOneTox();
    numCountFromXtoY();
    return 0;
}
