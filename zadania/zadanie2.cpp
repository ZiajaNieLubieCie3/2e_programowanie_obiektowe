#include <iostream>
using namespace std;

int fib(int liczba);

int main()
{

	int liczba;

	cout << "Podaj nr wyrazu ci¹gu: ";
	cin >> liczba;

	cout << liczba << " wyraz ci¹gu ma wartoœæ " << fib(liczba) << endl;

}

int fib(int liczba)
{
	int a = 0, b = 1;

	for (int i = 0; i <	 liczba; i++)
	{
		b = a + b;           
		a = b - a;
	}
	return a;
}
