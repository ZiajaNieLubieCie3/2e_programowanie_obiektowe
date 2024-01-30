#include <iostream>

using namespace std;

double obwodPr(double bok1, double bok2) {
    return bok1*2 + bok2*2;
}
double polePr(double bok1, double bok2) {
    return bok1 * bok2;
}

int main()
{
    double bok1, bok2;
    cout << "Podaj pierwszy bok prostokata" << endl; cin >> bok1;
    cout << "Podaj drugi bok prostokata" << endl; cin >> bok2;
    cout << "Oto obwod prostokata: " << obwodPr(bok1, bok2) << " ,i jego pole: " << polePr(bok1, bok2);

}
