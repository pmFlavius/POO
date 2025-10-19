#include "catalog.h"

int student::getNota()
{
    return nota;
}
void student::setNota(int v)
{
    nota = v;
}

void student::setNume(char unNume[])
{
    if (nume)
        delete[] nume;
    nume = new char[strlen(unNume) + 1];
    strcpy(nume, unNume);
}

char *student::getNume(void)
{
    return nume;
}

void student::elibMem(void)
{
    if (nume)
    {
        delete[] nume;
        nume = 0;
    }
}

void student::citire(void)
{
    cout << "\nNumele studentului: ";
    char buffer[50] = "";
    cin.get();
    cin.getline(buffer, 50);
    setNume(buffer);
    cout << "\nNota elevului: ";
    int n;
    cin >> n;
    setNota(n);
}

void student::afisare(void)
{
    cout << "\nNumele elevului: " << getNume() << "\nNota elevului: " << getNota();
}

void Catalog::setComparator(PFnComparare comparator)
{
    for (int i = 0; i < nrGrupe; i++)
    {
        tabGrupe[i].comparator = comparator;
    }
}

void Grupa::citire(void)
{
    cout << "\nCiteste numele grupei: ";
    cin.get();
    char buffer[50] = "";
    cin.getline(buffer, 50);
    numeGrupa = new char[strlen(buffer) + 1];
    strcpy(numeGrupa, buffer);
    cout << "\nNumarul de studenti ai grupei: ";
    cin >> nrStud;

    tabStudenti = new student[nrStud];

    for (int i = 0; i < nrStud; i++)
    {
        tabStudenti[i].citire();
    }
}

void Grupa::afisare(void)
{
    cout << "\nNumele grupei: " << numeGrupa;
    cout << "\n";
    for (int i = 0; i < nrStud; i++)
    {
        tabStudenti[i].afisare();
    }
    cout << "\n";
}

void Grupa::elibMem(void)
{
    if (numeGrupa)
    {
        cout << "eliberarea memoriei pentru grupa: " << numeGrupa << endl;
        delete[] numeGrupa;
        numeGrupa = 0;
    }
    for (int s = 0; s < nrStud; s++)
    {
        tabStudenti[s].elibMem();
    }
    delete[] tabStudenti;
    tabStudenti = 0;
}

void Grupa::bSort(void)
{
    bool sortat;
    do
    {
        sortat = 0;
        for (int i = 0; i < nrStud - 1; i++)
        {
            if (comparator(tabStudenti[i], tabStudenti[i + 1]) == 1)
            {
                swap2(tabStudenti[i], tabStudenti[i + 1]);
                sortat = 1;
            }
        }
    } while (sortat);
}

void Catalog::citire(void)
{
    cout << "\nCititi numarul de grupe: ";
    cin >> nrGrupe;
    tabGrupe = new Grupa[nrGrupe];
    for (int i = 0; i < nrGrupe; i++)
    {
        tabGrupe[i].citire();
    }
}

void Catalog::afisare(void)
{
    for (int i = 0; i < nrGrupe; i++)
    {
        tabGrupe[i].afisare();
    }
}

void Catalog::elibMemorie(void)
{
    for (int i = 0; i < nrGrupe; i++)
    {
        tabGrupe[i].elibMem();
    }
}

void Catalog::sortare(void)
{
    for (int i = 0; i < nrGrupe; i++)
    {
        tabGrupe[i].bSort();
    }
}

int comparNumeDupaLungimeCrescator(student a, student b)
{
    int rez = strlen(a.getNume()) - strlen(b.getNume());
    if (rez > 0)
        rez = 1;
    else if (rez < 0)
        rez = -1;
    return rez;
}

int comparNoteDescrescator(student a, student b)
{
    if (a.getNota() < b.getNota())
        return 1;   
    else if (a.getNota() > b.getNota())
        return -1;
    else
        return 0;
}

int comparNumeAlfabetic(student a, student b)
{
    int cmp = strcmp(a.getNume(), b.getNume());
    if (cmp > 0)
        return 1;
    else if (cmp < 0)
        return -1;
    else
        return 0;
}

void swap2(student &a, student &b)
{
    char *temp = new char[strlen(a.getNume()) + 1];
    strcpy(temp, a.getNume());

    a.setNume(b.getNume());
    b.setNume(temp);
    delete[] temp;

    int notaTemp = a.getNota();
    a.setNota(b.getNota());
    b.setNota(notaTemp);
}
