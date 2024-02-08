#include <iostream>
using namespace std;

// Funkcje konwersji
double convert(double value, int choice) {
    switch (choice) {
    case 1: return value * 0.621371; 
    case 2: return value / 0.621371; 
    case 3: return value * 1000; 
    case 4: return value / 1000; 
    case 5: return value * 0.277778; 
    case 6: return value * 3.6; 
    case 7: return value * 9 / 5 + 32; 
    case 8: return (value - 32) * 5 / 9; 
    case 9: return value / 1000; 
    case 10: return value / 8; 
    case 11: return value * 1000; 
    case 12: return value * 125; 
    case 13: return value * 8; 
    case 14: return value / 125; 
    default: return -1; 
    }
}

int main() {
    int choice;
    double value;

    cout << "Wybierz rodzaj konwersji:\n"
        << "1. kilometry na mile\n"
        << "2. mile na kilometry\n"
        << "3. kilometry na metry\n"
        << "4. metry na kilometry\n"
        << "5. kilometry na metry/sekunde\n"
        << "6. metry na kilometry/godzine\n"
        << "7. stopnie celsjusza/stopnie fahrenheita\n"
        << "8. stopnie fahrenheita/stopnie celsjusza\n"
        << "9. bity na kilobity\n"
        << "10. bity na bajty\n"
        << "11. kilobity na bity\n"
        << "12. kilobity na bajty\n"
        << "13. bajty na bity\n"
        << "14. bajty na kilobity\n"
        << "Wybierz opcjê (1-14): ";

    cin >> choice;

    cout << "Podaj wartosc do konwersji: ";
    cin >> value;

    double result = convert(value, choice);

    if (result == -1)
        cout << "Niepoprawny wybór.\n";
    else
        cout << "Wynik konwersji: " << result << endl;

    return 0;
}
