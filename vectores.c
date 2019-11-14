#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    float x1 = 0;
    float y1 = 0;
    float x2 = 0;
    float y2 = 0;
    double m;
    double modulo = 0;
    double sentido;

    printf("\nCalculadora de los elementos de un Vector\n");
    printf("Ingrese la coordenada x1 :\n");
    scanf("%f", &x1);
    printf("Ingrese la coordenada y1 :\n");
    scanf("%f", &y1);
    printf("Ingrese la coordenada x2 :\n");
    scanf("%f", &x2);
    printf("Ingrese la coordenada y2 :\n");
    scanf("%f", &y2);

    x1 = x1 - x2;
    y1 = y1 - y2;

    modulo = sqrt(pow(x1, 2) + pow(y1, 2));

    m = y1 / x1;

    sentido = atan(m) * 180 / 3.1416;
    if (sentido < 0)
    {
        sentido = sentido * -1;
    }

    printf("modulo = %.2f\n", modulo);
    printf("Sentido = %.2f%c\n", sentido, 248);

    if (sentido > 0 && sentido < 90)
    {
        printf("Direccion: noreste\n");
    }
    else if (sentido > 90 && sentido < 180)
    {
        printf("Direccion: noroeste\n");
    }
    else if (sentido > 180 && sentido < 270)
    {
        printf("Direccion: suroeste\n");
    }
    else if (sentido > 270 && sentido < 360)
    {
        printf("Direccion: sureste\n");
    }
    else if (sentido == 0 || sentido == 360)
    {
        printf("Direccion: este\n");
    }
    else if (sentido == 90)
    {
        printf("Direccion: norte\n");
    }
    else if (sentido == 180)
    {
        printf("Direccion: oeste\n");
    }
    else if (sentido == 270)
    {
        printf("Direccion: sur\n");
    }
}