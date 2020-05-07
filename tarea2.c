#include <stdio.h>
#include <math.h>

void circleAreaAndPerimeter()
{
    printf("\nCalculando el area y perimetro de un circulo\n");
    printf("\nInserte el radio del circulo: ");

    float radius = 0.0f;
    scanf("%f", &radius);

    float perimeter = 2 * 3.14 * radius;
    float circleArea = pow(radius, 2) * 3.14; //pow((radio * 3.14), 2);

    printf("\n==================================================");
    printf("%s", "\nEl perimetro del circulo es: ");
    printf("%f", perimeter);
    printf("%s", "\nEl area del circulo es: ");
    printf("%f", circleArea);
    printf("\n==================================================\n");
}

void trapezeArea()
{
    printf("\nCalculando el area de un trapecio: \n");
    printf("\nInsertar primera base del trapecio: ");
    float firstBase = 0.0f;
    scanf("%f", &firstBase);

    printf("\nInsertar segunda base del trapecio: ");
    float secondBase = 0.0f;
    scanf("%f", &secondBase);

    printf("\nInsertar la altura del trapecio: ");
    float height = 0.0f;
    scanf("%f", &height);

    float result = ((firstBase + secondBase) / 2) * height;
    printf("\n\n==================================================");
    printf("\nEl area del trapecio es: ");
    printf("%f", result);
    printf("\n==================================================\n");
}

void kmToMt()
{
    printf("\nConvirtiendo KM to MT\n");
    printf("\nInsertar km para convertirlos a mt: ");
    float km = 0.0f;
    scanf("%f", &km);

    float result = km * 1000;
    printf("\n\n==================================================");
    printf("\nEl resultado en mt es: ");
    printf("%f", result);
    printf("\n==================================================\n");
}

int main()
{
    circleAreaAndPerimeter();
    trapezeArea();
    kmToMt();
    return 0;
}
