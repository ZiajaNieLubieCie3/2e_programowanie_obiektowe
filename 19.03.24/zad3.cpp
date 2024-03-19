#include <iostream>
#include <cstdio>

using namespace std;

struct {
    char imie[20];
    char nazwisko[20];
    char plec[10];
} dane;

int main()
{

    printf("Podaj imie pracownika: ");
    scanf_s("%s", dane.imie, 20);

    printf("Podaj nazwisko pracownika: ");
    scanf_s("%s", dane.nazwisko, 20);
    do {
        printf("(m/M - mezczyzna, k/K - kobieta\nPodaj plec pracownika: ");
        scanf_s("%s", dane.plec, 2);
        if (dane.plec[0] != 'm' && dane.plec[0] != 'M' && dane.plec[0] != 'k' && dane.plec[0] != 'K')
        {
            printf("Podana zla plec!\n");
        }
    } while (dane.plec[0] != 'm' && dane.plec[0] != 'M' && dane.plec[0] != 'k' && dane.plec[0] != 'K');

    if (dane.plec[0] == 'm' || dane.plec[0] == 'M')
    {
        printf("\nImie: %s", dane.imie);
        printf(" Nazwisko: %s", dane.nazwisko);
        printf(" Plec: Mezczyzna");
    }
    else
    {
        printf("\nImie: %s", dane.imie);
        printf(" Nazwisko: %s", dane.nazwisko);
        printf(" Plec: Kobieta");
    }


}
