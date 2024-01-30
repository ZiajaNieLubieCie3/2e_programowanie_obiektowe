#include <iostream>

using namespace std;

double obwodOk(double, double&);
double poleOk(double, double&);

int main()
{
    double promien;
    cout << "Podaj promien" << endl; cin >> promien;
    double pole = poleOk(promien, pole);
    double obwod;
    obwodOk(promien, obwod);

    cout << "Wyniki: " << endl;
    cout << "Pole wynosi " << pole << endl;
    cout << "Obwod wynosi " << obwod << endl;

    return 0;
}

double obwodOk(double promien, double &obwod){
    obwod = 2 * 3.14 * promien;

    return obwod;
}
double poleOk(double promien, double &pole){
    pole = 3.14 * promien * promien;

    return pole;
}

