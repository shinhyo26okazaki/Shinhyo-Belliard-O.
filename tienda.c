#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int A = 0; //5
    int a = 3;
    int B = 0; //10
    float b = 0;
    int cb = 2;
    int C = 0; //15
    int D = 0; //20
    int E = 0; //25
    int ce = 4;
    int F = 0; //30
    int f = 0;
    int cf = 0;
    int cbd = 1;
    int ca = 0;
    int cbc = 0;

    char produc;

    printf("que desea comprar: ");
    //scanf("%s", produc);

    while (produc != 13)
    {
        produc = getche();

        switch (produc)
        {
        case 'A':
            A++;
            ca++;
            break;
        case 'B':
            B++;
            cbc++;
            break;
        case 'C':
            C++;
            break;
        case 'D':
            D++;
            break;
        case 'E':
            E++;
            break;
        case 'F':
            F++;
            f++;
            break;
        default:
            break;
        }

        if (A == a)
        {
            A--;
            a = A + 3;
        }
        if (B == cb)
        {
            B--;
            b = b + 5;
            cb = B + 2;
        }
        if (D >= cbd && B == cb - 1 && C >= cbd)
        {
            B--;
            b = b + 10 * 0.25;
            cbd++;
        }
        if (E == ce && F == cf)
        {
            printf("\nno puede serguir comprando E a menos que compre una o mas F \n");
        }
        if (F > cf)
        {
            ce = ce + 4;
            cf++;
        }
    }

    int und = ca + cbc + C + D + E;
    B = (B * 10) + b;
    float itebis = (A + B + C + D + E) * 0.18;
    float total = A + B + C + D + E + F;

    printf("\n         FACTURA  \n");
    printf("\n");
    printf("     UND   DESCRIPCION   PRECIO \n");
    printf("\n");
    printf("     %d       A          %d   \n", ca, A * 5);
    printf("     %d       B          %d   \n", cbc, B);
    printf("     %d       C          %d   \n", C, C * 15);
    printf("     %d       D          %d   \n", D, D * 20);
    printf("     %d       E          %d   \n", E, E * 25);
    printf("     %d       F          %d   \n", F, F * 30);
    /*A = A * 5;
    B = (B + b) * 10;
    C = C * 15;
    D = D * 20;
    E = E * 25;
    F = F * 30;*/
    printf("                   ITEBIS %.2f   \n", itebis);
    printf("Total %d                  %.2f   \n", und, itebis + total);
    printf("     GRACIAS POR SU COMPRA     \n");
}
