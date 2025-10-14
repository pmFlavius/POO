#include <stdio.h>
#include <stdlib.h>
#include "functii1.h"

int main()
{
    int n;
    printf("Cititi numarul de studenti ");
    scanf("%d", &n);
    student *v = (student *)malloc(n * sizeof(student));
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Studentul %d:\n", i + 1);
        v[i].read = citire;
        v[i].read(&v[i]);
    }
    for (i = 0; i < n; i++)
    {
        v[i].write = afisare;
        v[i].write(&v[i]);
    }
    return 0;
}