#include <ctime>
#include <iostream>

using namespace std;

int main()
{
	int number;
	int computer;
	int score;
	int win = 0;
	int cwin = 0;
	int draw = 0;

	srand(time(0));
	computer = rand() % 5 + 1;

	cout << "Wybierz atak: " << endl;
	cout << "1 -> Nozyce " << endl;
	cout << "2 -> Papier " << endl;
	cout << "3 -> Kamien " << endl;
	cout << "4 -> Jaszczurka" << endl;
	cout << "5 -> Spock" << endl;
	cout << "-------------------------------" << endl;
	do {
		cin >> number;

		if (number == 0)
		{
			cout << "Koniec programu " << endl;
			return 0;
		}

		if (computer == number) {
			cout << "Remis " << endl;
			draw++;
		}

		if (number == 1) {
			cout << "Wybrales atak Nozyc " << endl;
		}
		else if (number == 2) {
			cout << "Wybrales atak Papieru " << endl;
		}
		else if (number == 3) {
			cout << "Wybrales atak Kamienia " << endl;
		}
		else if (number == 4) {
			cout << "Wybrales atak Jaszczurki " << endl;
		}
		else if (number == 5) {
			cout << "Wybrales atak Spocka " << endl;
		}

		if (computer == 1) {
			cout << "Komputer wybral atak Nozyc " << endl;
		}
		else if (computer == 2) {
			cout << "Komputer wybral atak Papieru " << endl;
		}
		else if (computer == 3) {
			cout << "Komputer wybral atak Kamienia " << endl;
		}
		else if (computer == 4) {
			cout << "Komputer wybral atak Jaszczurki " << endl;
		}
		else if (computer == 5) {
			cout << "Komputer wybral atak Spocka " << endl;
		}

		if (computer == 1 && number == 2) {
			cout << "Komputer wygral " << endl;
			cwin++;
		}
		if (computer == 1 && number == 4) {
			cout << "Komputer wygral " << endl;
			cwin++;
		}
		if (computer == 2 && number == 3) {
			cout << "Komputer wygral " << endl;
			cwin++;
		}
		if (computer == 2 && number == 5) {
			cout << "Komputer wygral " << endl;
			cwin++;
		}
		if (computer == 3 && number == 1) {
			cout << "Komputer wygral " << endl;
			cwin++;
		}
		if (computer == 3 && number == 4) {
			cout << "Komputer wygral " << endl;
			cwin++;
		}
		if (computer == 4 && number == 2) {
			cout << "Komputer wygral " << endl;
			cwin++;
		}
		if (computer == 4 && number == 5) {
			cout << "Komputer wygral " << endl;
			cwin++;
		}
		if (computer == 5 && number == 1) {
			cout << "Komputer wygral " << endl;
			cwin++;
		}
		if (computer == 5 && number == 3) {
			cout << "Komputer wygral " << endl;
			cwin++;
		}

		if (number == 1 && computer == 2) {
			cout << "Wygrales " << endl;
			win++;
		}
		if (number == 1 && computer == 4) {
			cout << "Wygrales " << endl;
			win++;
		}
		if (number == 2 && computer == 3) {
			cout << "Wygrales " << endl;
			win++;
		}
		if (number == 2 && computer == 5) {
			cout << "Wygrales " << endl;
			win++;
		}
		if (number == 3 && computer == 1) {
			cout << "Wygrales " << endl;
			win++;
		}
		if (number == 3 && computer == 4) {
			cout << "Wygrales " << endl;
			win++;
		}
		if (number == 4 && computer == 2) {
			cout << "Wygrales " << endl;
			win++;
		}
		if (number == 4 && computer == 5) {
			cout << "Wygrales " << endl;
			win++;
		}
		if (number == 5 && computer == 1) {
			cout << "Wygrales " << endl;
			win++;
		}
		if (number == 5 && computer == 3) {
			cout << "Wygrales " << endl;
			win++;
		}

		cout << "Liczba wyrganych z komputerem: " << win << endl;
		cout << "Liczba wygranych komputera: " << cwin << endl;
		cout << "Liczba remisow : " << draw << endl;

	} while (true);
}