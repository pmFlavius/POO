#include "functii.h"

void Stiva::push(int data)
{
    Nod *p = new Nod;
    p->data = data;
    p->succ=vf;
    vf = p;
}

void Stiva::pop()
{
    if (!isEmpty())
    {
        Nod *temp = vf;
        vf = vf->succ;
        delete temp;
    }
    else
    {
        cout<<"Stiva goala nu poti da pop";
        return;
    }
}
bool Stiva::isEmpty()
{
    if (vf == 0)
        return 1;
    return 0;
}
int Stiva::top()
{
    if (!isEmpty())
    {
        return vf->data;
    }
    else
    {
        cout << "Stiva goala";
        return -1;
    }
}

void Stiva::print()
{
    while(!isEmpty())
    {
        cout<<top()<<" ";
        pop();
    }
}
