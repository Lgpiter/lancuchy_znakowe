#include <stdio.h>

void usun_spacje(char tab[],int n);//funkcja usuwa spacje z napisu

int main()
{
    char tekst[11] = "a b c d e";
    puts(tekst);
    usun_spacje(tekst,10);
    puts(tekst);
}

void usun_spacje(char tab[],int n)
{
    for (int i = 0; i < n; i++)
    {
        if (tab[i] == ' ')
        {
            for (int j = i; j < n - 1; j++)
            {
                tab[j] = tab[j+1];
            }
        }
    }
}
