#include <iostream> 
using namespace std;

double przeliczanie(double mila);

int main()
{
	double mila;
	cout << "Podaj odleglosc w milach: ";
	cin >> mila;
	cout << przeliczanie(mila);
}

double przeliczanie(double mila)
{
	double kilometr;

	kilometr = mila * 1.609;

	return kilometr;
}