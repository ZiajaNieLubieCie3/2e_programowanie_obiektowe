#include <iostream>
#include <cmath>

using namespace std;

double obwodOk(const double&);
double poleOk(const double&);

int main()
{
    double promien;
    cout << "Podaj promien" << endl; cin >> promien;
    cout << "Oto obwod kola: " << obwodOk(promien) << " ,i jego pole: " << poleOk(promien);
    return 0;
}

double obwodOk(const double& promien) {
    return 2*3.14*promien;
}
double poleOk(const double& promien) {
    return 3.14*pow(promien, 2);
}

