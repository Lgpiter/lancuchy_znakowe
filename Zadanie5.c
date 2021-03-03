#include <stdio.h>
#include <assert.h>

int zawiera(char *tekst, char znak);//funckja zwraca 1, jesli w tekscie zawarty jest znak oraz 0 w przeciwnym przypadku
int main()
{
    char* tekst = "piotrek";
    assert(zawiera(tekst,'o') == 1);
    assert(zawiera(tekst,'5') == 0);
}

int zawiera(char *tekst, char znak)
{
      while(*tekst != '\0')
   {
       if(*tekst == znak)
       {
           return 1;
       }
       tekst++;
   }
   return 0;
}
