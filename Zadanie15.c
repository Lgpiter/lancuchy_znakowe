#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, const char *argv[])
{
    int licznik = 0;
    int liczba;
    char pom;
    const char * opcja1 = "-p";
    const char * opcja2 = "-u";
    const char * opcja3 = "-l";
    if((strcmp(opcja1,argv[1]) == 0))
    {
        liczba = 1;
    }
    if((strcmp(opcja2,argv[1]) == 0))
    {
        liczba = 2;
    }
    if((strcmp(opcja3,argv[1]) == 0))
    {
        liczba = 3;
    }
    
    char pomv2;
    while((pom = getchar()) != EOF)
    {
        licznik++;
        if(liczba == 1)
            pomv2 = toupper(pom);
        else if(liczba == 2)
            pomv2 = tolower(pom);
        putchar(pomv2);
    }
    printf("W pliku jest %d znakow\n",licznik);
}
