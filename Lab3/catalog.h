#ifndef CATALOG_H_
#define CATALOG_H_

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

struct student
{
private:
    char *nume;
    int nota;

public:
    int getNota(void);
    void setNota(int v);

    char *getNume(void);
    void setNume(char unNume[]);

    void elibMem(void);
    void citire(void);
    void afisare(void);
};

typedef int (*PFnComparare)(student a, student b);

struct Grupa
{
    int nrStud;
    student *tabStudenti;

    char *numeGrupa;
    void citire(void);
    void afisare(void);
    PFnComparare comparator;

    void bSort(void);
    void elibMem(void);
};

struct Catalog
{
    int nrGrupe;
    Grupa *tabGrupe;
    void setComparator(PFnComparare comparator);
    void citire(void);
    void afisare(void);
    void sortare(void);
    void elibMemorie(void);
};

int comparNumeAlfabetic(student a, student b);
int comparNoteDescrescator(student a, student b);
int comparNumeDupaLungimeCrescator(student a, student b);
void swap2(student &a, student &b);

#endif