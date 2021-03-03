#include <stdio.h>
#include <assert.h>

char* znajdz_w_tablicy(char *pom, char znak);//funkcja przeglada tablice, jesli znajdzie dany znak, zwraca jego wskaznik w tablicy, a jesli nie to zwraca wskaznik zerowy

int main()
{
    char* tekst = "piotrek";
    char* pos_o = tekst + 2;
    assert(znajdz_w_tablicy(tekst,'o') == pos_o);
    assert(znajdz_w_tablicy(tekst,'5') == NULL);
}

char* znajdz_w_tablicy(char *pom, char znak)
{
   while(*pom != '\0')
   {
       if(*pom == znak)
       {
           return pom;
       }
       pom++;
   }
   return NULL;
}
