#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
using namespace std;

int main() {

	srand(time(0));
	double Liczba_rzeczywista = 1 + (10 - 1) * (double)rand() / RAND_MAX;

	cout << "Liczba wylosowana: " << Liczba_rzeczywista << ", zaokrąglona liczba: " << round(Liczba_rzeczywista);

}
