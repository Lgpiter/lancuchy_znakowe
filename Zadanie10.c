#include <stdio.h>
#include <string.h>
#include <ctype.h>

void wypisz_gwiazdki();//funckcja sluzy do wypisania gwiazdek
void pokaz_menu();//funkcja pokazuje menu sluzace do obslugi programu
void wypisz_lancuchy(char dane[][81], int num);//funkcja wypisuje lancuchy
void wypisz_lancuchy_w_porzadku_ASCII(char *lancuchy[], int num);
void wypisz_lancuchy_rosnaco(char *lancuchy[], int num);
void wypisz_lanuchy_od_dlugosci_pierwszego_slowa(char *lancuchy[], int num);

int main()
{
    char dane[10][81];
    char *wsklan[10];
    int licznik = 0;
    int wybor;
    
    printf("Podaj maksymalnie 10 wierszy, a ja wyswietle Ci menu co mozesz z nimi zrobic\n");
    printf("Aby zakonczyc, wcisnij enter na poczatku wiersza\n");
    while (licznik < 10 && fgets(dane[licznik], 81,stdin ) != NULL && dane[licznik][0] != '\n')
    {
        wsklan[licznik] = dane[licznik];
        licznik++;
    }
    
    pokaz_menu();
    scanf("%d",&wybor);
    while(wybor != 5)
    {
        switch(wybor)
        {
        case 1:  wypisz_lancuchy(dane,licznik);
                 scanf("%d",&wybor);
                 break;
        case 2:  wypisz_lancuchy_w_porzadku_ASCII(wsklan,licznik);
                 scanf("%d",&wybor);
                 break;
        case 3:  wypisz_lancuchy_rosnaco(wsklan,licznik);
                 scanf("%d",&wybor);
                 break;
        case 4:  wypisz_lanuchy_od_dlugosci_pierwszego_slowa(wsklan,licznik);
                 scanf("%d",&wybor);
                 break;
        }
            
                
    }
}

void wypisz_gwiazdki()
{
    for(int i = 0; i < 70; i++)
    {
        printf("*");
    }
    printf("\n");
}

void pokaz_menu()
{
    wypisz_gwiazdki();
    printf("%40s\n", "Wyswietl lanuchy:");
    printf("1)W pierwotnej kolejnosci %10d)W porzadku ASCII\n",2);
    printf("3)Wedlug dlugosci rosnaco %10d)Wedlug dlugosci pierwszego slowa\n", 4);
    printf("5)Zakoncz\n");
    wypisz_gwiazdki();
}

void wypisz_lancuchy(char dane[][81], int num)
{
    int j = 0;
    for(int i = 0; i < num; i++)
    {
        while(dane[i][j] != '\0')
        {
            printf("%c", dane[i][j]);
            j++;
        }
        j = 0;
    }
}

void wypisz_lancuchy_w_porzadku_ASCII(char *lancuchy[], int num)
{
    char *temp;
    int dol, szuk;
    
    for(dol = 0; dol <num; dol++)
    {
        for(szuk = dol + 1; szuk < num; szuk ++)
        {
            if (strcmp(lancuchy[dol],lancuchy[szuk]) > 0)
            {
                temp = lancuchy[dol];
                lancuchy[dol] = lancuchy[szuk];
                lancuchy[szuk] = temp;
            }
        }
    }
    for(int k = 0; k < num; k++)
    {
        fputs(lancuchy[k],stdout);
    }
}

void wypisz_lancuchy_rosnaco(char *lancuchy[], int num)
{
    char *temp;
    int dol, szuk;
    int dlugosc1 = 0;
    int dlugosc2 = 0;

    
    for(dol = 0; dol <num; dol++)
    {
        dlugosc1 = strlen(lancuchy[dol]);
        printf("Dlugosc pierwszego %d\n",dlugosc1);
        for(szuk = dol + 1; szuk < num; szuk ++)
        {
            dlugosc2 = strlen(lancuchy[szuk]);
            printf("Dlugosc drugiego %d\n",dlugosc2);
            if (dlugosc1 >= dlugosc2)
            {
                printf("Zamieniam %d z %d\n",dol,szuk);
                temp = lancuchy[dol];
                lancuchy[dol] = lancuchy[szuk];
                lancuchy[szuk] = temp;
            }
        }
    }
    for(int k = 0; k < num; k++)
    {
        fputs(lancuchy[k],stdout);
    }
}

void wypisz_lanuchy_od_dlugosci_pierwszego_slowa(char *lancuchy[], int num)
{
    char *temp;
    int dol, szuk;
    int dlugosc1 = 0;
    int dlugosc2 = 0;
    int j = 0;
    int k = 0;
    for(dol = 0; dol <num; dol++)
    {
        while(lancuchy[dol][j] != '\0')
        {
            if(isspace(lancuchy[dol][j]))
            {
                break;
            }
            dlugosc1++;
            j++;
        }
        
        for(szuk = dol + 1; szuk < num; szuk ++)
        {
            while(lancuchy[szuk][k] != '\0')
            {
                if(isspace(lancuchy[szuk][j]))
                    break;
                dlugosc2++;
                k++;
            }
               
            if (dlugosc1 >= dlugosc2)
            {
                printf("Dlugosc pierwszego: %d Dlugosc drugiego %d\n",dlugosc1,dlugosc2);
                temp = lancuchy[dol];
                lancuchy[dol] = lancuchy[szuk];
                lancuchy[szuk] = temp;
            }
            k = 0;
            dlugosc2 = 0;
        }
        j = 0;
        dlugosc1 = 0;
    }
    for(int k = 0; k < num; k++)
    {
        fputs(lancuchy[k],stdout);
    }
}
