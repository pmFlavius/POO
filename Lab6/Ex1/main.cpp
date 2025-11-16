#include "functii.h"

int main(void)
{
    Complex c1,c2;
    c1.citire();
    c2.citire();
    Complex c3,c4;
    c3=c1-c2;
    c3.afisare();
    c4=c1*c2;
    c4.afisare();
    if(c1==c2)
    {
        cout<<"c1=c2\n";
    }
    else
    {
        cout<<"c1!=c2\n";
    }
    cout<<"Modulul nr complex c1: "<<(~c1)<<"\n";
    return 0;
}