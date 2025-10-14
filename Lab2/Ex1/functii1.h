#ifndef FUNCTII1_H_
#define FUNCTII1_H_

typedef struct
{
    int nr_mat;
    char *nume;
    char gen;
    float nota;
    void (*read)(struct student *st);
    void (*write)(struct student *st);
} student;

void citire(student *st);
void afisare(student *st);

#endif