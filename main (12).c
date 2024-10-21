#include <stdio.h>
#include <stdlib.h>
#include <math.h> //ze wzgl na fabs - wartosc bezwzgledna i pow (potega) i round

struct liczba
{
    double val;
    double err;
};

typedef struct liczba liczba;

liczba suma (liczba a, liczba b)
{
    liczba c;
    c.val = a.val + b.val;
    c.err = a.err + b.err;
    return c;
}

liczba roznica (liczba a, liczba b)
{
    liczba d;
    d.val = a.val - b.val;
    d.err = a.err - b.err;
    return d;
}

liczba iloczyn (liczba a, liczba b)
{
    liczba e;
    e.val = a.val * b.val;
    e.err = fabs(b.val) * a.err + fabs(a.val) * b.err + a.err * b.err;
    return e;
}

liczba iloraz (liczba a, liczba b)
{
    liczba f;
    f.val = a.val / b.val;
    f.err = (b.val * a.err + a.val * b.err)/(b.val * b.val);
    return f;
}

liczba zaokr (liczba c, double n)
{
    liczba z;
    z.val = round(c.val*(pow(10, n)))/pow(10, n);
    z.err = fabs (c.val - z.val);
    return z;
}

int main()
{
    liczba a = {5, 0.5}, b = {3, 0.3}, c, d, e, f, z;

    c = suma (a, b);
    printf("Wartosc sumy %f i %f wynosi %f z bledem %f\n", a.val, b.val, c.val, c.err);

    int n=2; // do jakiej liczby po przecinku chcemy zaokraglic?
    z = zaokr(c, n);
    printf("Liczba %f zaookraglona do %d liczby po przecinku to %f\n", c.val, n, z.val);
    double zb = c.err + z.err;
    printf("Blad bezwzgledny to %f\n\n", zb);


    d = roznica (a,b);
    printf("Wartosc roznicy %f i %f wynosi %f z bledem %f\n", a.val, b.val, d.val, d.err);
    z = zaokr(d, n);
    printf("Liczba %f zaookraglona do %d liczby po przecinku to %f\n", d.val, n, z.val);
    zb = d.err + z.err;
    printf("Blad bezwzgledny to %f\n\n", zb);


    e = iloczyn (a, b);
    printf("Wartosc iloczynu %f i %f wynosi %f z bledem %f\n", a.val, b.val, e.val, e.err);
    z = zaokr(e, n);
    printf("Liczba %f zaookraglona do %d liczby po przecinku to %f\n", e.val, n, z.val);
    zb = e.err + z.err;
    printf("Blad bezwzgledny to %f\n\n", zb);


    f = iloraz (a, b);
    printf("Wartosc ilorazu %f i %f wynosi %f z bledem %f\n", a.val, b.val, f.val, f.err);
    z = zaokr(f, n);
    printf("Liczba %f zaookraglona do %d liczby po przecinku to %f\n", f.val, n, z.val);
    zb = f.err + z.err;
    printf("Blad bezwzgledny to %f\n\n", zb);

    return 0;
}
