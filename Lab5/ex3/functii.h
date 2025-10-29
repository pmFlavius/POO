#ifndef FUNCTII_H_
#define FUNCTII_H_

#include <iostream>

using namespace std;

class Complex{
    int re,im;
    public:
        Complex()
        {
            re=im=0;
        }
        Complex(int re,int im)
        {
            this->re=re;
            this->im=im;
        }
        Complex(const Complex &ob)
        {
            this->re=ob.re;
            this->im=ob.im;
        }
        ~Complex(){}
        void citire();
        void afisare();
        int egal(Complex nr2);
};

class MultimeComplex {
    Complex *v;
    int dim;
    int n;
    public:
    MultimeComplex()
    {
        dim=10;
        v=new Complex[10];
        n=0;
    }
    MultimeComplex(int dim)
    {
        this->dim=dim;
        v=new Complex[dim];
        n=0;
    }
    MultimeComplex(const MultimeComplex &ob)
    {
        this->dim=ob.dim;
        this->n=ob.n;
        this->v=new Complex[ob.dim];
        for(int i=0;i<n;i++)
        {
            this->v[i]=ob.v[i];
        }
    }
    ~MultimeComplex()
    {
        delete[] v;
    }
    void adauga(Complex c);
    void extrage(Complex c);
    void afisare();
};

#endif