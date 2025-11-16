#include "functii.h"

Complex operator-(Complex ob,Complex ob1)
{
    Complex c;
    c.re=ob.re-ob1.re;
    c.im=ob.im-ob1.im;
    return c;
}

Complex operator*(Complex ob,Complex ob1)
{
    Complex c;
    c.re=ob.re*ob1.re-ob.im*ob1.im;
    c.im=ob.re*ob1.im+ob1.re*ob.im;
    return c;        
}

bool operator==(Complex ob,Complex ob1)
{
    return (ob.re==ob1.re && ob.im==ob1.im);
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
    cout<<endl;
}

void Complex::citire()
{
    cin>>this->re>>this->im;
}


