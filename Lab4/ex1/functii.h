#ifndef FUNCTII_H_
#define FUNCTII_H_

#include <iostream>

using namespace std;

class Multime
{
    int *date;
    int dim;
    int n;

public:
    Multime()
    {
        dim = 10;
        n = 0;
        date = new int[dim + 1];
    }
    Multime(int d)
    {
        dim = d;
        n = 0;
        date = new int[d + 1];
    }
    ~Multime()
    {
        delete[] date;
    }
    void adauga(int nr);
    void extrage(int nr);
    void afisare();
};

#endif