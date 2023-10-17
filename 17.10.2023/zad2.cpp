// zad2.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int main()
{
    int x;
    int y = 1;
    cout << "Wprowadz liczbe parzysta: ( 0 konczy dzialanie) ";
    cin >> x;
    if (x == 0)
    {
        cout << "Nie wprowadzono zadnej liczby";
        goto exit;
    }
    do {
        if (x % 2 != 0)
        {
            do {
                cout << "Wprowadzono liczbe nieparzysta, wprowadz parzysta: ";
                cin >> x;
            } while (x % 2 != 0);
        }
        if (x == 0)
        {
            cout << "Iloczyn wprowadzonych liczb jest rowny: " << y;
            goto exit;
        }
        y = y * x;
        cout << "Wprowadz liczbe parzysta: (liczba 0 kończy zadawanie pytań o liczbę) ";
        cin >> x;
    } while (x % 2 == 0);
exit:
    return 0;
}
