#include <stdio.h>
#include <string.h>

//char* odwroc(char tekst[]);//funkcja odwraca tekst np, idz do domu zmienia na do domu idz

int main()
{
    char *tab = "MIM TO PEDAL PIES GO JEBAL";
    int n = strlen(tab);
    char pom[n];
    puts(tab);
 
    for (int i = 0; i < n; i++)
    {
        pom[i] = '#';
    }
    
    int licznik = 0;
    int pomocnicza = 0;
    int licznik_zer = 0;
    int maksymalna_spacji = 0;
    int koniec = 0;//sluzy do wpisania ostatnich liczb z tablicy
    
    for(int i = 0; i < n; i++)
    {
        if(tab[i] == ' ')
            maksymalna_spacji++;
    }
    
    for (int i = 0; i < n; i++)
    {
        if(tab[i] == ' ')
        {
            if (licznik_zer == 0)
            {
                pom[n - 1 - licznik] = ' ';
                while(licznik > 0)
                {
                    pom[n - licznik] = tab[i - licznik]; 
                    licznik--;
                }
                licznik = 0;
                licznik_zer++;
            }
            else
            {
                for (int j = 0; j < n; j++)
                {
                    if(pom[j] == ' ')
                    {
                        break;
                    }
                    pomocnicza++;
                }
                
                pom[pomocnicza - 1 -licznik] = ' ';
                while(licznik > 0)
                {
                    pom[pomocnicza - licznik] = tab[i - licznik]; 
                    licznik--;
                }
                licznik = 0;
                pomocnicza = 0;
                licznik_zer++;
            }
        }
        else
        {
            
            if(licznik_zer == maksymalna_spacji && i == n-1)
            {
                while(licznik >= 0)
                {
                    pom[koniec] = tab[i - licznik];
                    koniec++;
                    licznik--;
                }
            }
            licznik++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%c",pom[i]);
    }
    printf("\n");
}
