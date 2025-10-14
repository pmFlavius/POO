#include <iostream>
#include "functii.h"

using namespace std;

int main()
{
    catalog *c = creareCatalog();

    cout << "\nCATALOG:";
    c->Afisare();

    cout << "\nSortare Alfabetica:";
    c->sortareALF();
    c->Afisare();

    cout << "\nSortare dupa lungimea numelui:";
    c->sortareLUNG();
    c->Afisare();

    distrugereCatalog(c);
    return 0;
}