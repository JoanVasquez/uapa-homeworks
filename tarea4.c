#include <stdio.h>
#include <math.h>

void calculateOddOrEven()
{
    printf("\nCalcular numeros par o impar\n");

    printf("\n==================================================\n");
    for (int i = 0; i < 3; i++)
    {
        printf("\nInserte un numero: ");
        int num = 0;
        scanf("%i", &num);
        (num % 2 == 0) ? printf("%d es par", num) : printf("%d es impar", num);
    }
    printf("\n\n==================================================\n");
}

int *sortArr(int nums[])
{
    int temp;
    for (int i = 0; i < 3 - 1; i++)
    {

        for (int j = 0; j < 3 - i - 1; j++)
        {
            if (nums[j] < nums[j + 1])
            {
                temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
    return nums;
}

void orderNumbers()
{
    printf("\nOrdenar numeros\n");
    int nums[3];

    printf("\n==================================================\n");
    for (int i = 0; i < 3; i++)
    {
        int num = 0;
        printf("\nInserte un numero: ");
        scanf("%i", &num);
        nums[i] = num;
    }
    int *orderedArr = sortArr(nums);
    printf("\nLos numeros ordenados de mayor a menor son: ");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", orderedArr[i]);
    }
    printf("\n\n==================================================\n");
}

void getMonth()
{
    printf("\nConseguir mes año\n");
    const char months[12][12] = {
        "Enero",
        "Febrero",
        "Marzo",
        "Abril",
        "Mayo",
        "Junio",
        "Julio",
        "Augosto",
        "Septiembre",
        "Octubre",
        "Noviembre",
        "Deciembre",
    };

    printf("\n==================================================\n");
    printf("\nInserte el numero del mes: ");
    int month = 1;
    scanf("%d", &month);

    if (month == 0 || month >= 13)
    {
        printf("\nDebe ser un numero entre 1-12");
    }
    else
    {
        printf("\nEl mes es: ");
        printf("%s\n", months[month - 1]);
    }
    printf("\n\n==================================================\n");
}

int main()
{
    calculateOddOrEven();
    orderNumbers();
    getMonth();
    return 0;
}
