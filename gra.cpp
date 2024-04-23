#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <ctime>

using namespace std;

string Zgadnij(string SekretneSlowo, string OryginalneSlowo);
string MieszajLitery(string OryginalneSlowo);
int Powtorz();

int main() {
    srand(time(NULL));
    do {
        string const PlikSlowa("C:/juh/wyniki.txt");
        ofstream Strumien(PlikSlowa.c_str());
        string OryginalneSlowo;

        if (Strumien) {
            cout << "Podaj slowo: ";
            cin >> OryginalneSlowo;
            Strumien << OryginalneSlowo << endl;
        }
        else {
            cout << "Plik nie dziala.";
        }

        string Wymieszane = MieszajLitery(OryginalneSlowo);
        Zgadnij(Wymieszane, OryginalneSlowo);
        Strumien.close();

    } while (Powtorz() == 1);

    return 0;
}

string MieszajLitery(string OryginalneSlowo) {
    string SekretneSlowo;
    int pozycja(0);

    while (OryginalneSlowo.size() != 0) {
        pozycja = rand() % OryginalneSlowo.size();
        SekretneSlowo += OryginalneSlowo[pozycja];
        OryginalneSlowo.erase(pozycja, 1);
    }

    return SekretneSlowo;
}

string Zgadnij(string SekretneSlowo, string OryginalneSlowo) {
    string ZgadnieteSlowo;
    int proby = 1;

    do {
        cout << "Sprobuj zgadnac slowo: " << SekretneSlowo << endl;
        cin >> ZgadnieteSlowo;
        if (ZgadnieteSlowo == OryginalneSlowo) {
            cout << "Dobrze, dales rade.\n";
        }
        else {
            if (proby < 3) {


          cout << "Sprobuj ponownie.\n";
            }
            proby++;
            if (proby > 3) {
                cout << "Za duzo prob, przegrales.\n";
            }
        }
    } while (ZgadnieteSlowo != OryginalneSlowo && proby <= 3);

    return ZgadnieteSlowo;
}

int Powtorz() {
    char wybor;
    cout << "Chcesz zagrac ponownie? (t/n) ";
    cin >> wybor;
    if (wybor == 't') {
        return 1;
    }
    else {
        return 0;
    }
}

