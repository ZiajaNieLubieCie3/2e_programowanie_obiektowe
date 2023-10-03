#include <iostream>
using namespace std;

int main() {
	int marka;

	cout << "Podaj numer od 1 do 30";
	cin >> marka;
	switch (marka) {
	case 1:
		cout << "wybrałeś markę: Mercedes" << endl;

		break;
	case 2:
		cout << "wybrałeś markę: BMW" << endl;

		break;
	case 3:
		cout << "wybrałeś markę: Audi" << endl;

		break;
	case 4:
		cout << "wybrałeś markę: Seat" << endl;

		break;
	case 5:
		cout << "wybrałeś markę: Renault" << endl;

		break;
	case 6:
		cout << "wybrałeś markę: Skoda" << endl;

		break;
	case 7:
		cout << "wybrałeś markę: Citroen" << endl;

		break;
	case 8:
		cout << "wybrałeś markę: Kia" << endl;

		break;
	case 9:
		cout << "wybrałeś markę: Alfa Romeo" << endl;

		break;
	case 10:
		cout << "wybrałeś markę: Volvo" << endl;

		break;
	case 11:
		cout << "wybrałeś markę: Volkswagen" << endl;

		break;
	case 12:
		cout << "wybrałeś markę: Cupra" << endl;

		break;
	case 13:
		cout << "wybrałeś markę: Isuzu" << endl;

		break;
	case 14:
		cout << "wybrałeś markę: Dodge" << endl;

		break;
	case 15:
		cout << "wybrałeś markę: Ineos" << endl;

		break;
	case 16:
		cout << "wybrałeś markę: Byd" << endl;

		break;
	case 17:
		cout << "wybrałeś markę: Kawasaki" << endl;

		break;
	case 18:
		cout << "wybrałeś markę: Lamborghini" << endl;

		break;
	case 19:
		cout << "wybrałeś markę: Maserati" << endl;

		break;
	case 20:
		cout << "wybrałeś markę: Seres" << endl;

		break;
	case 21:
		cout << "wybrałeś markę: Rolls royce" << endl;

		break;
	case 22:
		cout << "wybrałeś markę: Skywell" << endl;

		break;
	case 23:
		cout << "wybrałeś markę: Piaggio" << endl;

		break;
	case 24:
		cout << "wybrałeś markę: Tesla" << endl;

		break;
	case 25:
		cout << "wybrałeś markę: Land Rover" << endl;

		break;
	case 26:
		cout << "wybrałeś markę: Levc" << endl;

		break;
	case 27:
		cout << "wybrałeś markę: Lexus" << endl;

		break;
	case 28:
		cout << "wybrałeś markę: Jac" << endl;

		break;
	case 29:
		cout << "wybrałeś markę: Jaguar" << endl;

		break;
	case 30:
		cout << "wybrałeś markę: Mitsubishi" << endl;

		break;
	default:
		cout << "Błędny wybór.Wybierz numer od 1 do 30" << endl;
		break;
	}
	return 0;
}