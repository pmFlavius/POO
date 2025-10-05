#include <stdio.h>

int str_length(char *s)
{
    int i = 0;
    while (s[i])
    {
        i++;
    }
    return i;
}

char *strdel(char *s, int pos, int n)
{
    int i = pos;
    while (s[i + n])
    {
        s[i] = s[i + n];
    }
    s[i] = '\0';
    return s;
}

char *strins(char *s1, int pos, char *s2)
{
    int len1 = str_length(s1);
    int len2 = str_length(s2);
    int i;

    for (i = len1; i >= pos; i--)
    {
        s1[i + len2] = s1[i];
    }
    for (i = 0; i < len2; i++)
    {
        s1[pos + i] = s2[i];
    }

    return s1;
}

int eq_mask(char *sir, char *masca)
{
    if (str_length(sir) != str_length(masca))
    {
        return -1;
    }
    else
    {
        int i;
        for (i = 0; i < str_length(sir); i++)
        {
            if (masca[i] == '?')
                continue;
            else
            {
                if (sir[i] != masca[i])
                    return -1;
            }
        }
        return 1;
    }
}

int eqcuv(char *cuv, char **tablou)
{
    int i=0;
    while (tablou[i])
    {
        if (eq_mask(cuv, tablou[i]) == 1)
            return 1;
        i++;
    }
    return 0;
}

int main()
{
    char *tablou[100] = {"curs1", "curs2", "curs3"};
    char *cuv1 = "curs2", *cuv2 = "curs5";
    printf("curs2 %s in tablou\n", (eqcuv(cuv1, tablou)) ? "este" : "nu este");
    printf("curs5 %s in tablou\n", (eqcuv(cuv2, tablou)) ? "este" : "nu este");

    return 0;
}