#ifndef FUNCTII_H_
#define FUNCTII_H_

struct student
{
    int nr_mat;
    char *nume;
    char gen;
    float nota;
    void Read();
    void Write();
    void Dealoc();
};

struct catalog
{
    int nr;
    student *s;
    void sortareALF();
    void sortareLUNG();
    void Citire();
    void Afisare();
    void Construct();
    void Destruct();
};

catalog *creareCatalog();
void distrugereCatalog(catalog *c);

#endif