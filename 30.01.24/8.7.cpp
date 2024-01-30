#include <iostream>

using namespace std;

void obwodOk(double, double&);
void poleOk(double, double&);

int main()
{
    double promien;
    cout << "Podaj promien" << endl; cin >> promien;
    double pole;
    poleOk(promien, pole);
    double obwod;
    obwodOk(promien, obwod);

    cout << "Wyniki: " << endl;
    cout << "Pole wynosi " << pole << endl;
    cout << "Obwod wynosi " << obwod << endl;

    return 0;
}

void obwodOk(double promien, double &obwod){
    2 * 3.14 * promien;
}
void poleOk(double promien, double& pole){
    3.14 * promien * promien;
}

