#include "functii.h"

int Complex::egal(Complex c2)
{
    return (this->re == c2.re && this->im == im);
}

void Complex::citire()
{
    cin>>re>>im;
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