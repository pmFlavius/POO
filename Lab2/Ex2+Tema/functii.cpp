#include <iostream>
#include <cstring>
#include "functii.h"

using namespace std;

void student::Read()
{
    cout << "\nNumar matricol: ";
    cin >> nr_mat;
    cin.get();
    nume=new char[50];
    cout << "\nNume: ";
    cin.getline(nume,50);
    cout << "\nGen(M/F): ";
    cin >> gen;
    cout << "\nNota: ";
    cin >> nota;
}

void student::Write()
{
    cout << "\n\nNumar matricol: " << nr_mat << " \nNume:" << nume << " \nGen:" << gen << " \nNota:" << nota << " ";
}

void student::Dealoc()
{
    delete[] nume;
    nume = 0;
}

void catalog::Construct()
{
    cout << "\nNumarul de studenti: ";
    cin >> nr;
    s = new student[nr];
}

void catalog::Citire()
{
    for (int i = 0; i < nr; i++)
    {
        cout << "Studentul " << i + 1 << " ";
        s[i].Read();
    }
}

void catalog::Afisare()
{
    for (int i = 0; i < nr; i++)
    {
        s[i].Write();
    }
}

void catalog::sortareALF()
{
    bool sortat = 0;
    do
    {
        sortat = 0;
        for (int i = 0; i < nr - 1; i++)
        {
            if (strcmp(s[i].nume, s[i + 1].nume) > 0)
            {
                swap(s[i], s[i + 1]);
                sortat = 1;
            }
        }
    } while (sortat);
}

void catalog::sortareLUNG()
{
    bool sortat = 0;
    do
    {
        sortat = 0;
        for (int i = 0; i < nr - 1; i++)
        {
            if (strlen(s[i].nume) > strlen(s[i + 1].nume))
            {
                swap(s[i], s[i + 1]);
                sortat = 1;
            }
        }
    } while (sortat);
}

void catalog::Destruct()
{
    for (int i = 0; i < nr; i++)
    {
        s[i].Dealoc();
    }
    delete[] s;
    s = 0;
}

catalog *creareCatalog()
{
    catalog *c = new catalog;
    c->Construct();
    c->Citire();
    return c;
}

void distrugereCatalog(catalog *c)
{
    if (c)
    {
        c->Destruct();
        delete c;
        c = 0;
    }
}