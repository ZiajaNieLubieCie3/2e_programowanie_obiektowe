#include <iostream>
#include <cmath>

using namespace std;

double obwodOk(const double*);
double poleOk(const double*);

int main()
{
    double promien;
    cout << "Podaj promien" << endl; cin >> promien;
    double* w_promien = &promien;
    double pole = poleOk(w_promien);
    cout << "Pole wynosi " << pole << endl;
    double obwod = obwodOk(w_promien);
    cout << "Obwod wynosi " << obwod << endl;
    return 0;
}

double obwodOk(const double *promien) {
    return 2*3.14 * *promien;
}
double poleOk(const double *promien) {
    return 3.14*pow(*promien, 2);
}

