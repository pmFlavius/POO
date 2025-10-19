#include "catalog.h"

int main(void)
{
    int operatie;
    PFnComparare unPointerLaOFunctieDeComparare;
    Catalog catalogulAnului1, catalogulAnului2, catalogulAnului3, catalogulAnului4;
    Catalog catalogMaster[2];
    catalogulAnului2.citire();
    catalogulAnului2.afisare();
    do
    {
        do
        {
            cout << "\n\nCe doriti sa efectuati?" << endl;
            cout << "0.Iesire din program;" << endl;
            cout << "1 - sortare alfabetica a numelor;" << endl;
            cout << "2 - sortare descrescatoare dupa nota;" << endl;
            cout << "3 - sortare dupa lungimea numelui - crescator." << endl;
            cin >> operatie;
        } while ((operatie < 0) || (operatie > 3));
        switch (operatie)
        {
        case 1:
            cout << "1 - sortare alfabetica a numelor;" << endl;
            unPointerLaOFunctieDeComparare = comparNumeAlfabetic;
                catalogulAnului2.setComparator(unPointerLaOFunctieDeComparare);
            catalogulAnului2.setComparator(comparNumeAlfabetic);
            catalogulAnului2.sortare();
            catalogulAnului2.afisare();
            break;
        case 2:
            cout << "2 - sortare descrescatoare dupa nota;" << endl;
            unPointerLaOFunctieDeComparare = comparNoteDescrescator;
            catalogulAnului2.setComparator(unPointerLaOFunctieDeComparare);
            catalogulAnului2.sortare();
            catalogulAnului2.afisare();
            break;
        case 3:
            cout << "3 - sortare dupa lungimea numelui - crescator." << endl;
            unPointerLaOFunctieDeComparare = comparNumeDupaLungimeCrescator;
            catalogulAnului2.setComparator(unPointerLaOFunctieDeComparare);
            catalogulAnului2.sortare();
            catalogulAnului2.afisare();
            break;
        default:
            cout << "Sfarsitul executiei programului." << endl;
        }
    } while (operatie);
    catalogulAnului2.elibMemorie();
    return EXIT_SUCCESS;
}