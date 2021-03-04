#include <stdio.h>
#include <ctype.h>

int main()
{
    int ile_liter_malych = 0;
    int ile_liter_duzych = 0;
    int ile_slow = 1;
    int ile_cyfr = 0;
    
    char pom;
    while((pom = getchar()) != EOF)
    {
        if(isalpha(pom))
        {
            if(isupper(pom))
            {
                ile_liter_duzych++;
            }
            else
            {
                ile_liter_malych++;
            }
        }
        if(isdigit(pom))
        {
            ile_cyfr++;
        }
        if(isspace(pom))
        {
            ile_slow++;
        }
        
    }
    printf("\nW tekscie jest %d duzych liter\n",ile_liter_duzych);
    printf("W tekscie jest %d malych liter\n",ile_liter_malych);
    printf("W tekscie jest %d cyfr \n",ile_cyfr);
    printf("W tekscie jest %d slow\n",ile_slow);
}
