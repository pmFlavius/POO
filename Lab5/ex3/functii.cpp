#include "functii.h"

int Complex::egal(Complex c2)
{
    return (this->re == c2.re && this->im == im);
}

void Complex::citire()
{
    cout << "\nRe:";
    cin >> re;
    cout << "\nIm:";
    cin >> im;
}

void Complex::afisare()
{
    cout << endl;
    if (im == 0)
        cout << re;
    if (im < 0)
        cout << re << im << "i";
    if (im > 0)
        cout << re << "+" << im << "i";
}

void MultimeComplex::adauga(Complex c)
{
    if (n + 1 > dim)
    {
        cout << "Vector plin, mai scoate din el";
        return;
    }
    else
    {
        v[n++] = c; 
    }
}

void MultimeComplex::extrage(Complex c)
{
    bool ok = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i].egal(c))
        {
            ok = 1;
            for (int j = i; j < n - 1; j++)
            {
                v[i] = v[i + 1];
            }
            n--;
        }
    }
    if (ok == 0)
        cout << "Nu se gaseste n lista";
}

void MultimeComplex::afisare()
{
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << endl;
        v[i].afisare();
    }
}