#include <stdio.h>

char *kopiowanie(char s1[], char s2[], int n);//funkcja kopiuje n znakow z lancucha s2 do lanucha s1
int main()
{
    char dwa[] = "piotrek";
    char jeden[6];
    kopiowanie(jeden,dwa,5);
    puts(jeden);
}

char *kopiowanie(char s1[], char s2[], int n)
{
    int licznik = 0;
    while(licznik < n)
    {
        s1[licznik] = s2[licznik];
        licznik++;
    }
}
