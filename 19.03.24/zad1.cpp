#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main()
{
	int liczba, potega;
	double wynik;

	printf("Podaj liczbe jaka chcesz potegowac: ");
	scanf_s("%d", &liczba);

	printf("Podaj potege: ");
	scanf_s("%d", &potega);

	wynik = pow(liczba, potega);
	printf("Wynik to: %6.5f\n", wynik);

}