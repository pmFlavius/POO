#include <stdio.h>
#include <stdlib.h>
#include "functii1.h"

void citire(student *st)
{
    printf("\nNumar matricol: ");
    scanf("%d", &st->nr_mat);
    st->nume = (char *)malloc(20 * sizeof(char));
    printf("\nNume: ");
    scanf("%s", st->nume);
    printf("\nGen(M/F): ");
    scanf(" %c", &st->gen);
    printf("\nNota: ");
    scanf("%f", &st->nota);
}

void afisare(student *st)
{
    printf("Numar matricol: %d \n Nume:%s  \n Gen:%c \n Nota: %.2f\n", st->nr_mat, st->nume, st->gen, st->nota);
}
