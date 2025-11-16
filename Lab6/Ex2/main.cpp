#include "functii.h"

int main(void)
{
    Multime A,B;
    A+=3;
    A+=5;
    A+=6;
    A+=4;
    B=A;
    A.afisare();
    B.afisare();
    B+=9;
    B-=3;
    A+=B;
    B.afisare();
    A.afisare();
    A+=2;
    Multime C;
    Multime D;
    D+=1;
    C=A+B+D;
    C.afisare();
    Multime F=A;
    F.afisare();
    return 0;
}