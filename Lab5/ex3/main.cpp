#include "functii.h"

int main()
{
    MultimeComplex m1,m2;
    int x;
    cout<<"\n\n\n";
    while(1)
    {
        cout<<"\n";
        cout<<"\n1-Adaugare element";
        cout<<"\n2-Extrage element";
        cout<<"\n0-Iesire\n";
        cin>>x;
        if(x==0)
        {
            break;
        }
        else if(x==1)
        {
            Complex c;
            c.citire();
            m1.adauga(c);
            m2=m1;
            m2.afisare();
        }
        else if(x==2)
        {
            Complex c;
            c.citire();
            m2.extrage(c);
            m2.afisare();
            m1.afisare();
        }
    }
    
}