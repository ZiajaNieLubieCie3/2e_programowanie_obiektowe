#include <iostream>
#include <cmath>
#include <cstdio>
#include <math.h>
#define M_PI 3.141592653589793238462643383279502884
using namespace std;

int main()
{
	
	int podstawa, wysokosc, obwod;

	cout << "Podaj podstawe: "; 
	cin >> podstawa;

	cout << "Podaj wysokosc: ";
	cin >> wysokosc;

	obwod = sqrt(pow((podstawa / 2), 2) + pow(wysokosc, 2)) * 2 + podstawa;

	cout << "Pole trojkata to: " << (podstawa * wysokosc) / 2 << ", " << "Obwod trojkata to: " << obwod;

	// zad 2

	int promien, polekuli, objetosckuli;

	cout << "Podaj promien kuli: ";
	cin >> promien;

	polekuli = 4 * M_PI * pow(promien, 2);
	objetosckuli = 4 / 3 * M_PI * pow(promien, 3);

	cout << "Pole kuli to: " << polekuli << ", " << "objetosc kuli to: " << objetosckuli;
	





}