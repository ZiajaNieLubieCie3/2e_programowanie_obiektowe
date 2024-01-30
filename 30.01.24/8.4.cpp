#include <iostream>
#include <cmath>

using namespace std;

double obwodOk(double promien) {
    return 2*3.14*promien;
}
double poleOk(double promien) {
    return 3.14*pow(promien, 2);
}

int main()
{
    double promien;
    cout << "Podaj promien" << endl; cin >> promien;
    cout << "Oto obwod kola: " << obwodOk(promien) << " ,i jego pole: " << poleOk(promien);
}
