#include <iostream>
using namespace std;

float zwracanie_dziesiec_razy(int ilosc);

int main() {
	int ilosc = 10;
	zwracanie_dziesiec_razy(ilosc);

}

float zwracanie_dziesiec_razy(int ilosc) {
	for (int i = 1; i <= ilosc; i++)
	{
		cout << i << ". Programuje w C++\n";
	}
	return 0;
}