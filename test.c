#include <stdio.h>

int main()
{
    int n = 10;//dlugosc tablicy
    int tab[10] = {1,2,0,4,5,0,6,7,8,9};
    int pom[10];
    for (int i = 0; i < n; i++)
    {
        pom[i] = 1;
    }
    
    int licznik = 0;
    int pomocnicza = 0;
    int licznik_zer = 0;
    int maksymalna_zer = 0;
    int koniec = 0;//sluzy do wpisania ostatnich liczb z tablicy
    
    for(int i = 0; i < n; i++)
    {
        if(tab[i] == 0)
            maksymalna_zer++;
    }
    
    for (int i = 0; i < n; i++)
    {
        if(tab[i] == 0)
        {
            if (licznik_zer == 0)
            {
                pom[n-1 - licznik] = 0;
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
                    if(pom[j] == 0)
                    {
                        break;
                    }
                    pomocnicza++;
                }
                
                pom[pomocnicza - 1 -licznik] = 0;
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
            
            if(licznik_zer == maksymalna_zer && i == n-1)
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
        printf("%d ",pom[i]);
    }
    printf("\n");
}
