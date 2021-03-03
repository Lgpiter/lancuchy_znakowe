#include <stdio.h>

void pobierz(int n, char tekst[]);//funkcja pobiera n znakow
int main()
{
    char tekst[10];
    pobierz(10,tekst);
    for(int i = 0; i < 10; i++)
        printf("%c",tekst[i]);
    putchar('\n');
}

void pobierz(int n, char tekst[])
{
    int licznik = 0;
    int i = 0;
    while(licznik < n)
    {
        tekst[i] = getchar();
        i++;
        licznik++;
    }
}

