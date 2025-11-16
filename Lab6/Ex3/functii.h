#ifndef FUNCTII_H_
#define FUNCTII_H_

#include <iostream>
#include <cstring>

using namespace std;

class String
{
    char *sir;
    public:
        String()
        {
            this->sir=new char[1];
            this->sir[0]='\0';
        }
        String(char *sir)
        {
            this->sir=new char[strlen(sir)+1];
            strcpy(this->sir,sir);
        }
        String(const String &ob)
        {
            this->sir=new char[strlen(ob.sir)+1];
            strcpy(this->sir,ob.sir);
        }
        ~String()
        {
            delete[] this->sir;
        }
        String operator+(const String &);
        String& operator=(const String &);
        bool operator==(const String &);
        int cauta(const String &);
        void afisare();
        int compara(const String &);
};

#endif