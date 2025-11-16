#ifndef FUNCTII_H_
#define FUNCTII_H_

#include <iostream>
#include <math.h>

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
        friend Complex operator-(Complex,Complex );
        friend Complex operator*(Complex ,Complex );
        friend bool operator==(Complex ,Complex );
        float operator~()
        {
            return sqrt((this->re)*(this->re)+(this->im)*(this->im));
        }
        void afisare();
        void citire();
};


#endif