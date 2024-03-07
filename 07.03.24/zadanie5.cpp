#include <iostream>

using namespace std;

void liczb_pit(int a, int b, int c);

int main()
{
    liczb_pit(3, 4, 6);
}

void liczb_pit(int a, int b, int c)
{
    if(a*a + b * b == c*c)
    {
        cout << "1";
    }
    else 
    {
        cout << "0";
    }
}
