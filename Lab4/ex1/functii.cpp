#include "functii.h"

void Multime::adauga(int nr)
{
    if (n + 1 > dim)
    {
        cout << "Vector plin";
    }
    else
    {
        date[n++] = nr;
    }
}

void Multime::afisare()
{
    for (int i = 0; i < n; i++)
    {
        cout << date[i] << " ";
    }
    cout << endl;
}

void Multime::extrage(int nr)
{
    bool ok = 0;
    for (int i = 0; i < n; i++)
    {
        if (date[i] == nr)
        {
            for (int j = i; j < n - 1; j++)
                date[i] = date[i + 1];
            n--;
            ok = 1;
            break;
        }
    }
    if (!ok)
    {
        cout << "Nu se afla n lista";
    }
}
