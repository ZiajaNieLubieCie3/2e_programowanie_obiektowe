#include <iostream>
#include <cmath>

using namespace std;

int sprawdzanie(int liczba);

int main ()
{
    sprawdzanie(16);
    
}

int sprawdzanie(int liczba)
{
    int pierwiastek = sqrt(liczba);
    
    if(liczba == pow(pierwiastek, 2)) 
    {
        cout << "1";
    }
    else
    {
        cout << "0";
    }
}
