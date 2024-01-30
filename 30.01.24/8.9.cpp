#include <iostream>

using namespace std;

void poleOk(double, double*);

double* obwodOk(const double*, double*);

int main()
{
    double promien;
    cout << "Podaj promien kola: " << endl; cin >> promien;

    double pole;
    double *w_pole = &pole;

    poleOk(promien, w_pole);

    double *w_promien = &promien;

    double obwod;
    double *w_obwod = &obwod;
    w_obwod = obwodOk(w_promien, w_obwod);

    cout << "Wyniki:" << endl;
    cout << "Pole wynosi " << pole << endl;
    cout << "Obwod wynosi " << obwod << endl;

    return 0;
}

void poleOk(double promien,double *w_poleO) {
    *w_poleO = 3.14 * promien * promien;
}

double* obwodOk(const double *w_promien, double *w_obwodO) {
    *w_obwodO = 2 * 3.14 * *w_promien;

    return w_obwodO;
}
