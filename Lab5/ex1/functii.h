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


#endif