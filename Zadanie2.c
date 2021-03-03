#include <stdio.h>

void pobierz(int n, char tekst[]);//funkcja pobiera n znakow, chyba, ze zobaczy znak enter
int main()
{
    char tekst[10];
    pobierz(10,tekst);
    for(int i = 0; i < 10; i++)
    {
        if(tekst[i] == '\n')
        {
            printf("\"ENTER\"");
            continue;
        }
        printf("%c",tekst[i]);
    }
    putchar('\n');
}

void pobierz(int n, char tekst[])
{
    int licznik = 0;
    int i = 0;
    char pom;
    while(licznik < n)
    {
        pom = getchar();
        if (pom == '\n')
        {
            tekst[i] = pom;
            break;
        }
        tekst[i] = pom;
        i++;
        licznik++;
    }
}
