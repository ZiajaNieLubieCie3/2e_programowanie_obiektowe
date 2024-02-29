#include <iostream>
#include <cstring>

using namespace std;

void pobierzNapis(char napis[])
{
    cin >> napis;
}

void wyswietlNapis(const char napis[])
{
    cout << napis << endl;
}

void sumaNapisow(const char napis1[], const char napis2[], char napis3[], char napis4[])
{
    char temp[33] = "";
    
    strcat(temp, napis1);
    strcat(temp, " ");
    strcat(temp, napis2);
    strcat(temp, " ");
    strcat(temp, napis3);
    
    strcat(napis4, temp);
    
}

int main()
{
    char pierwszyCzlon[10] = "", drugiCzlon[10] = "", trzeciCzlon[10] = "";
    char calosc[33] = "";
    
    cout << "Podaj pierwszy czlon nazwy: ";
    pobierzNapis(pierwszyCzlon);
    
    cout << "Podaj drugi czlon nazwy: ";
    pobierzNapis(drugiCzlon);
    
    cout << "Podaj trzeci czlon nazwy: ";
    pobierzNapis(trzeciCzlon);
    
    sumaNapisow(pierwszyCzlon, drugiCzlon, trzeciCzlon, calosc);
    
    cout << "Język programowania: ";
    wyswietlNapis(calosc);
}