#include "functii.h"

String String::operator+(const String &ob) 
{
    String temp;
    delete[] temp.sir;
    temp.sir = new char[strlen(sir) + strlen(ob.sir) + 1];
    strcpy(temp.sir, sir);      
    strcat(temp.sir, ob.sir);   
    return temp;
}

String &String::operator=(const String &ob)
{
    if (this != &ob)
    {
        delete[] sir;
        sir = new char[strlen(ob.sir) + 1];
        strcpy(sir, ob.sir);
    }
    return *this;
}

bool String::operator==(const String &ob)
{
    if (strcmp(this->sir, ob.sir) == 0)
        return 1;
    return 0;
}

void String::afisare()
{
    cout << this->sir << " ";
}

int String::compara(const String &ob)
{
    return strcmp(this->sir,ob.sir);
}

int String::cauta(const String &ob)
{
    char *p = strstr(this->sir, ob.sir);
    if (!p)
        return -1;
    return p - this->sir;
}