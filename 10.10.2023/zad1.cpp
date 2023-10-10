

#include <iostream>
#include <string>

using namespace std;

int main() {
    string username = "admin";
    string password = "12345";

    cout << "Podaj nazwe uzytkownika: ";
    string inputUsername;
    cin >> inputUsername;

    cout << "Podaj haslo";
    string inputPassword;
    cin >> inputPassword;

    if (inputUsername == username && inputPassword == password) {
        cout << "Dostęp przyznany. " << username << "!" << endl;

    }
    else {
        cout << "Dostęp nie przyznany. " << endl;
    }
    return 0;
}