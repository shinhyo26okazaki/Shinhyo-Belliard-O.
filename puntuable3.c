#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
/*BY SHINHYO BELLIARD OKAZAKI 2018-6937*/
/*ITLA*/

/*z= r + (|xl|-|xc|)    // j = imaginario
xl = w lj = 2 pi f lj //resultado en johmios
xc = 1/2pi f cj //resultado en johmios
i = v / z  //resultado en amperios
w=2*pi*f
vr = i r  // resultado en voltios
vl = i xl // resultado en voltios
vc = i xc // resultado en voltios

s = |v| |i| // resultado en voltios/amperios (VA)
p = (rc zt) i^2 // resultado en vatios(W)
q = parteimaginaria de z i^2 // resultado en voltio aperios reactivos (VAR)
cos p = p/s  factor de potencia
cos p = cos(angulo de desface de la intensidad del circuito )

l = xl/w*/
char name[10];
int n = 0;
int n1 = 0;
float num = 0;
int fname = 0;
char entrada[50];
int formulas = 0;
int v2 = 0;
int exponente = 0;
//////////////////////////variables////////////
float r = 0;
float v = 0;
float l = 0;
float c = 0;
float f = 0;
float z, xl, xc, w, i, vr, vl, vc, s, p, q, rc;
///////////////////////////////////////////////
void clear()
{
    formulas = 0;
    v2 = 0;
    exponente = 0;
    n = 0;
    n1 = 0;
    num = 0;
    fname = 0;
    r = 0;
    v = 0;
    l = 0;
    c = 0;
    f = 0;
    z = 0;
    xl = 0;
    xc = 0;
    w = 0;
    i = 0;
    vr = 0;
    vl = 0;
    vc = 0;
    s = 0;
    p = 0;
    q = 0;
    rc = 0;
}
void clearname()
{
    for (int i = 0; i <= 10; i++)
    {
        name[i] = '\0';
    }
}
void clearvalue()
{
    num = 0;
    clearname();
    n = 0;
    n1 = 0;
    fname = 0;
    formulas = 0;
    exponente = 0;
}
//********************************************************
void checkz()
{
    while (r == 0 || xl == 0 || xc == 0)
    {
        if (r == 0)
        {
            printf("\nfalta el valor de r=");
            scanf("%f", &r);
        }
        else if (xl == 0)
        {
            printf("\nfalta el valor de xl=");
            scanf("%f", &xl);
        }
        else if (xc == 0)
        {
            printf("\nfalta el valor de xc=");
            scanf("%f", &xc);
        }
    }
}
void checkxl()
{
    if (w == 0)
    {
        while (f == 0 || l == 0)
        {
            if (f == 0)
            {
                printf("\nfalta el valor de f=");
                scanf("%f", &f);
            }
            else if (l == 0)
            {
                printf("\nfalta el valor de l=");
                scanf("%f", &l);
            }
        }
    }
    else
    {
        if (l == 0)
        {
            printf("\nfalta el valor de l:\n");
            scanf("%f", &l);
            v2 = 1;
        }
    }
}
void checkr()
{
    while (vr == 0 || i == 0)
    {
        if (vr == 0)
        {
            printf("\nfalta el valor de vr:");
            scanf("%f", &vr);
        }
        else if (i == 0)
        {
            printf("\nfalta el valor de i:");
            scanf("%f", &i);
        }
    }
}
void checkv()
{
    while (z == 0 || i == 0)
    {
        if (z == 0)
        {
            printf("\nfalta el valor de z=");
            scanf("%f", &z);
        }
        else if (i == 0)
        {
            printf("\nfalta el valor de i=");
            scanf("%f", &i);
        }
    }
}
void checkl()
{
    while (xl == 0 || w == 0)
    {
        if (z == 0)
        {
            printf("\nfalta el valor de xl=");
            scanf("%f", &xl);
        }
        else if (w == 0)
        {
            printf("\nfalta el valor de w=");
            scanf("%f", &w);
        }
    }
}
void checkc()
{
    while (f == 0 || xc == 0)
    {
        if (f == 0)
        {
            printf("\nfalta el valor de f=");
            scanf("%f", &f);
        }
        else if (xc == 0)
        {
            printf("\nfalta el valor de xc=");
            scanf("%f", &xc);
        }
    }
}
void checkf()
{
    if (w == 0)
    {
        printf("\nfalta el valor de w=");
        scanf("%f", &w);
    }
}
void checkxc() //existe otra formula
{
    while (f == 0 || c == 0)
    {
        if (f == 0)
        {
            printf("\nfalta el valor de f=");
            scanf("%f", &f);
        }
        else if (c == 0)
        {
            printf("\nfalta el valor de c=");
            scanf("%f", &c);
        }
    }
}
void checki()
{

    if (v != 0 && z == 0)
    {
        printf("\nfalta el valor de z=");
        scanf("%f", &z);
    }
    if (z != 0 && v == 0)
    {
        printf("\nfalta el valor de v=");
        scanf("%f", &v);
    }

    if (vr != 0 && r == 0)
    {
        printf("\nfalta el valor de r=");
        scanf("%f", &r);
    }
    else if (vl != 0 && xl == 0)
    {
        printf("\nfalta el valor de xl=");
        scanf("%f", &xl);
    }
    else if (vc != 0 && xc == 0)
    {
        printf("\nfalta el valor de xc=");
        scanf("%f", &xc);
    }
    else if (vr == 0 && r != 0)
    {
        printf("\nfalta el valor de vr=");
        scanf("%f", &vr);
    }
    else if (vl == 0 && xl != 0)
    {
        printf("\nfalta el valor de vl=");
        scanf("%f", &vl);
    }
    else if (vc == 0 && xc != 0)
    {
        printf("\nfalta el valor de vc=");
        scanf("%f", &vc);
    }
    if (vr == 0 && vl == 0 && vc == 0 && z == 0 && v == 0)
    {
        printf("\nfalta el valor de vc=");
        scanf("%f", &vc);
    }
    if (r == 0 && xl == 0 && xc == 0 && z == 0 && v == 0)
    {
        printf("\nfalta el valor de xc=");
        scanf("%f", &xc);
    }
}
void checkw()
{
    if (f == 0)
    {
        printf("\nfalta el valor de f=");
        scanf("%f", &f);
    }
}
void checkvr()
{
    if (i == 0)
    {
        printf("\nfalta el valor de i=");
        scanf("%f", &i);
    }
    if (r == 0)
    {
        printf("\nfalta el valor de r=");
        scanf("%f", &r);
    }
}
void checkvl()
{
    if (i == 0)
    {
        printf("\nfalta el valor de i=");
        scanf("%f", &i);
    }
    if (xl == 0)
    {
        printf("\nfalta el valor de xl=");
        scanf("%f", &xl);
    }
}
void checkvc()
{
    if (i == 0)
    {
        printf("\nfalta el valor de i=");
        scanf("%f", &i);
    }
    if (xc == 0)
    {
        printf("\nfalta el valor de xc=");
        scanf("%f", &xc);
    }
}
void checks()
{
    if (i == 0)
    {
        printf("\nfalta el valor de i=");
        scanf("%f", &i);
    }
    if (v == 0)
    {
        printf("\nfalta el valor de v=");
        scanf("%f", &v);
    }
}
void checkp()
{
    if (rc == 0)
    {
        printf("\nfalta el valor de rc=");
        scanf("%f", &rc);
    }
    if (z == 0)
    {
        printf("\nfalta el valor de z=");
        scanf("%f", &z);
    }
    if (i == 0)
    {
        printf("\nfalta el valor de i=");
        scanf("%f", &i);
    }
}
void checkrc()
{
    if (z == 0)
    {
        printf("\nfalta el valor de z=");
        scanf("%f", &z);
    }
    if (i == 0)
    {
        printf("\nfalta el valor de i=");
        scanf("%f", &i);
    }
    if (p == 0)
    {
        printf("\nfalta el valor de p=");
        scanf("%f", &p);
    }
}
void checkq()
{
    if (z == 0)
    {
        printf("\nfalta el valor de z=");
        scanf("%f", &z);
    }
    if (i == 0)
    {
        printf("\nfalta el valor de i=");
        scanf("%f", &i);
    }
}

void parser(char entrada[])
{

    while (fname == 0)
    {
        if (entrada[n] == '=')
        {
            fname = 1;
        }
        else
        {
            name[n1] = entrada[n];
            n1++;
        }
        n++;
    }
    while (entrada[n] != '\0')
    {
        if (entrada[n] >= 48 && entrada[n] <= 57)
        {
            if (exponente != 0)
            {
                entrada[n] -= '0';
                num = num + (entrada[n] * pow(10, exponente));
                exponente--;
            }
            else
            {
                //Convercion de char a entero.
                entrada[n] -= '0';
                num = (num * 10) + entrada[n];
            }
        }
        else if (entrada[n] == '.')
        {
            exponente--;
        }
        else if (entrada[n] == '?')
        {
            formulas = 1;
        }
        n++;
    }
    exponente = 0;
    //*************asignacion de valores a las variables*******
    if (formulas == 0)
    {
        if (strncmp(name, "r", 1) == 0)
        {
            r = num;
        }
        else if (strncmp(name, "v", 1) == 0)
        {
            v = num;
        }
        else if (strncmp(name, "l", 1) == 0)
        {
            l = num;
        }
        else if (strncmp(name, "c", 1) == 0)
        {
            c = num;
        }
        else if (strncmp(name, "f", 1) == 0)
        {
            f = num;
        }
        else if (strncmp(name, "z", 1) == 0)
        {
            z = num;
        }
        else if (strncmp(name, "xl", 2) == 0)
        {
            xl = num;
        }
        else if (strncmp(name, "xc", 2) == 0)
        {
            xc = num;
        }
        else if (strncmp(name, "c", 1) == 0)
        {
            c = num;
        }
        else if (strncmp(name, "i", 1) == 0)
        {
            i = num;
        }
        else if (strncmp(name, "w", 1) == 0)
        {
            w = num;
        }
        else if (strncmp(name, "vr", 2) == 0)
        {
            vr = num;
        }
        else if (strncmp(name, "vl", 2) == 0)
        {
            vl = num;
        }
        else if (strncmp(name, "vc", 2) == 0)
        {
            vc = num;
        }
        else if (strncmp(name, "s", 1) == 0)
        {
            s = num;
        }
        else if (strncmp(name, "p", 1) == 0)
        {
            p = num;
        }
        else if (strncmp(name, "q", 1) == 0)
        {
            q = num;
        }
        else if (strncmp(name, "rc", 2) == 0)
        {
            rc = num;
        }
    }
    //***************************FORMULAS****************************************
    if (formulas == 1)
    {
        if (strncmp(name, "r", 1) == 0)
        {
            checkr();
            r = vr / i;
            printf("\nr = %fohm\n", r);
        }
        else if (strncmp(name, "l", 1) == 0)
        {
            checkl();
            l = xl / w;
            printf("\nl = %f mH\n", l);
        }
        else if (strncmp(name, "c", 1) == 0)
        {
            checkc();
            c = xc / (f / 6.2832);
            printf("\nc = %f uF\n", c);
        }
        else if (strncmp(name, "f", 1) == 0)
        {
            checkf();
            f = w / 6.2832;
            printf("\nf = %f Hz\n", f);
        }
        else if (strncmp(name, "z", 1) == 0)
        {
            checkz();
            z = xl - xc;
            printf("\nz = %f + ( %fj )", r, z);
        }
        else if (strncmp(name, "xl", 2) == 0)
        {
            checkxl();
            if (v2 == 0)
            {
                xl = (6.2832) * f * l;
            }
            else
            {
                xl = w * l; // hay que convertit l en rectangular
                v2 = 0;
            }
            printf("\nxl = %fj ohm", xl);
        }
        else if (strncmp(name, "xc", 2) == 0)
        {
            checkxc();
            xc = (f * c / 6.2832);
            printf("\nxc = %f ohm\n", xc);
        }
        else if (strncmp(name, "i", 1) == 0)
        {
            checki();
            if (vr != 0 && r != 0)
            {
                i = vr / r;
                printf("\ni = %f Amp\n", i);
            }
            else if (vl != 0 && xl != 0)
            {
                i = vl / xl;
                printf("\ni = %f Amp\n", i);
            }
            else if (vc != 0 && xc != 0)
            {
                i = vc / xc;
                printf("\ni = %f Amp\n", i);
            }
            else if (v != 0 && z != 0)
            {
                i = v / z;
                printf("\ni = %f Amp\n", i);
            }
        }
        else if (strncmp(name, "w", 1) == 0)
        {
            checkw();
            w = (6.2832) * f;
            printf("\nw = %f \n", w);
        }
        else if (strncmp(name, "vr", 2) == 0)
        {
            checkvr();
            vr = i * r;
            printf("\nvr = %f voltios\n", vr);
        }
        else if (strncmp(name, "vl", 2) == 0)
        {
            checkvl();
            vl = i * xl;
            printf("\nvl = %f voltios\n", vl);
        }
        else if (strncmp(name, "vc", 2) == 0)
        {
            checkvc();
            vc = i * xc;
            printf("\nvc = %f voltios\n", vc);
        }
        else if (strncmp(name, "s", 1) == 0)
        {
            checks();
            s = v * i;
            printf("\ns = %f voltios\n", s);
        }
        else if (strncmp(name, "p", 1) == 0)
        {
            checkp();
            p = rc * z * pow(i, 2);
            printf("\np = %f W\n", p);
        }
        else if (strncmp(name, "q", 1) == 0)
        {
            checkq();
            q = z * pow(i, 2);
            printf("\nq = %f W\n", q);
        }
        else if (strncmp(name, "rc", 2) == 0)
        {
            checkrc();
            rc = p / z * pow(i, 2);
            printf("\nrc = %f ohm\n", rc);
        }
        else if (strncmp(name, "v", 1) == 0)
        {
            checkv();
            v = i * z;
            printf("\nv = %f voltios\n", v);
        }
    }
    clearvalue();
}

int main()
{
    printf("\n[r,v,l,c,f,z,xl,xc,i,w,vr,vl,vc,s,p,q]\n");
    printf("****************************************\n");
    printf("*****CALCULADORA DE CIRCUITO RLC********\n");
    while (1)
    {
        scanf("%s", entrada);
        if (strncmp(entrada, "clear", 5) == 0)
        {
            clear();
            scanf("%s", entrada);
        }
        parser(entrada);
    }
}
