#include <stdio.h>

void pobierz_pierwsze(char tekst[],int n);//funkcja pobiera pierwsze slowo z danych wejsciowych

    int main()
{
    char tekst[10];
    pobierz_pierwsze(tekst, 10);
    fputs(tekst, stdout);
    putchar('\n');
}

void pobierz_pierwsze(char tekst[], int n)
{
    char pom = getchar();
    int i = 0;
    while(pom != EOF)
    {
        if(pom == ' ')
        {
            tekst[i] ='\0';
            return;
        }
        else
        {
            tekst[i] = pom;
            i++;
            pom = getchar();
        }
    }
}
