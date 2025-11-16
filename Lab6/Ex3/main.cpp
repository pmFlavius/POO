#include "functii.h"

int main()
{
    String A;
    String B("hello world");
    A=B;
    A.afisare();
    cout<<"\nA==B: ? "<<(A==B);

    String C("mesaj");
    String D=C;
    D=A+B+C;
    cout<<"\n";
    D.afisare();
    cout<<"\nD==C: ? "<<(D==C);

    int gasit=D.cauta(C);
    cout<<"\nSirul C se afla in D pe pozitia: "<<gasit;



    return 0;
}