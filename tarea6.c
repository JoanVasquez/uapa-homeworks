#include <stdio.h>
#include <math.h>

int powNum(int num)
{
    printf("\nCalculando el cuadrado de ");
    printf("%i", num);

    return pow(num, 2);
}

int getFactorial(int num)
{
    if (num == 0)
        return 1;
    else
        return (num * getFactorial(num - 1));
}

void printDivisor(int num)
{
    printf("\n==================================================\n");
    for (int i = 1; i <= num; ++i)
    {
        if (num % i == 0)
        {
            printf("%i", i);
            printf(" es divisible entre: ");
            printf("%i", num);
            printf("\n");
        }
    }
    printf("\n==================================================\n");
}

int main()
{
    printf("\nInserte un numero: ");
    int num = 0;
    scanf("%i", &num);

    int numPow = powNum(num);
    printf("\n==================================================");
    printf("\nEl numero al cuadrado es: ");
    printf("%i", numPow);
    printf("\n==================================================\n");

    printf("\nInserte un numero: ");
    int numTwo = 0;
    scanf("%i", &numTwo);

    int factorial = getFactorial(numTwo);
    printf("\n==================================================");
    printf("\nEl factorial es: ");
    printf("%i", factorial);
    printf("\n==================================================\n");

    printf("\nInserte un numero: ");
    int numThree = 0;
    scanf("%i", &numThree);

    printDivisor(numThree);

    return 0;
}