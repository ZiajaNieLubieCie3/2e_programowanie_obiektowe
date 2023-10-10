#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
	map<string, string>userPasswords;

	userPasswords["admin"] = "12345";
	userPasswords["Jacek"] = "22433";
	userPasswords["Patryk"] = "01234";

	bool loggedIn = false;
	string username;
	string password;

	while (!loggedIn) {
		cout << "Pdodaj nazwe uzytkownika: ";
		cin >> username;

		cout << "Podaj haslo: ";
		cin >> password;

		if (userPasswords.find(username) != userPasswords.end() && userPasswords[username] == password) {
			cout << "Dostep udzielony. " << username << "!" << endl; loggedIn = true;
		}
		else {
			cout << "Nie przydzielono dostepu. " << endl;
		}
	}
	return 0;
}