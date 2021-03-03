#include <stdio.h>

void odwrocenie_lanucha(char tekst[],int n);//funkcja odwraca lancuch o rozmiarze n

int main()
{
    char tekst[11] = "abcdefghij";
    for(int j = 0; j < 10; j++)
    {
        printf("%c", tekst[j]);
    }
    putchar('\n');
    odwrocenie_lanucha(tekst,10);

    for(int j = 0; j < 10; j++)
    {
        printf("%c", tekst[j]);
    }
    putchar('\n');
}

void odwrocenie_lanucha(char tekst[],int n)
{
    char pom;
    for (int i = 0; i < n/2; i++)
    {
        pom = tekst[i];
        tekst[i] = tekst [n -1- i];
        tekst[n- 1 -i] = pom;
    }
}
