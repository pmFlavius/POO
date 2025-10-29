#include "functii.h"

int main()
{
    Complex c1(5,4);
    Complex c2;
    c2.citire();
    if(c1.egal(c2))
    {
        cout<<"Sunt egale";
    }
    else
    {
        cout<<"Nu sunt egale";
    }
    return 0;
}