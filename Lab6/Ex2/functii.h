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
    Multime(const Multime& ob)
    {
        dim = ob.dim;
        n = ob.n;
        date = new int[dim];
        for (int i = 0; i < n; i++)
            date[i] = ob.date[i];
    }
    ~Multime()
    {
        delete[] date;
    }
    Multime &operator+=(int nr)
    {

        if (n + 1 > dim)
            cout << "Nu se poate adauga la multime";
        else
        {
            for (int i = 0; i < n; i++)
                if (date[i] == nr)
                    return *this; 
            date[n++] = nr;
        }
        return *this;
    }
    Multime &operator-=(int nr)
    {
        bool ok = 0;
        for (int i = 0; i < n; i++)
        {
            if (date[i] == nr)
            {
                for (int j = i; j < n - 1; j++)
                    date[j] = date[j + 1];
                n--;
                ok = 1;
                break;
            }
        }
        if (!ok)
        {
            cout << "Nu se afla n lista";
        }
        return *this;
    }
    Multime &operator=(const Multime &ob)
    {
        if (this == &ob)
            return *this;
        delete[] date;
        dim = ob.dim;
        n = ob.n;
        date = new int[dim];
        for (int i = 0; i < n; i++)
            date[i] = ob.date[i];
        return *this;
    }
    Multime &operator+=(const Multime &ob)
    {
        for(int i=0;i<ob.n;i++)
        {
            *this+=ob.date[i];
        }
        return *this;
    }

    Multime operator+(const Multime &ob)
    {
        Multime c(this->dim+ob.dim);
        c+=*this;
        c+=ob;
        return c;
    }
    void afisare();
};

#endif