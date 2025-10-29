#ifndef FUNCTII_H_
#define FUNCTII_H_

#include <iostream>

using namespace std;

class Stiva{
    struct Nod{
        int data;
        Nod *succ;
    }*vf;
    public:
        Stiva()
        {
            vf=nullptr;
        }
        ~Stiva()
        {
            while(vf)
            {
                Nod *temp=vf;
                vf=vf->succ;
                delete temp;
            }
        }
        void push(int data);
        bool isEmpty();
        void pop();
        int top();
        void print();

};


#endif