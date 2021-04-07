#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
    double podstawa,wynik;
    int wykladnik;
    char *koniec;
    if (argc < 2)
        printf ("Sposob uzycia: %s liczba - dodatnia\n", argv[0]);
    else
    {
        podstawa = strtod(argv[1],&koniec);
        wykladnik = atoi(argv[2]);
        printf("Wykladnik to %d\n",wykladnik);
        printf("Podstawa to %f\n",podstawa);
        
        if (wykladnik  == 0)
        {
            printf("WYNIK: 1\n");
            return 0;
        }
        
        if ( wykladnik != 0)
        {
            wynik = 1;
        }
        else
        {
            printf("WYNIK: 0\n");
            return 0;
        }
        
        for (int i = 1; i <= wykladnik; i++)
        {
            wynik *= podstawa;
        }
        printf("WYNIK %.2f\n",wynik);
    }
    return 0;
}
