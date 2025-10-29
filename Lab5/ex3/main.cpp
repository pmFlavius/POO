#include "functii.h"

int main()
{
    MultimeComplex m1;
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
            return 0;
        }
        else if(x==1)
        {
            Complex c;
            c.citire();
            m1.adauga(c);
            m1.afisare();
        }
        else if(x==2)
        {
            Complex c;
            c.citire();
            m1.extrage(c);
            m1.afisare();
        }
    }
    
}