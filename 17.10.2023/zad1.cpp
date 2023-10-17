/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>


using namespace std;

int main()

{
    string login = "login1";
    string haslo = "haslo1";
    int bledy = 3;

    do {
        cout << "Wprowadz login";
        cin >> login;
        if (login != "login1")
        {
            cout << "Bledny login\n";
            bledy--;

        }
        else
        {
            do {
                cout << "Wprowadz haslo: ";
                cin >> haslo;
                    if (haslo != "haslo1")
                    {
                        cout << "bledne haslo\n";
                            bledy--;
                    }
                    else
                    {
                        cout << "zalogowano";
                        goto exit;

                    }
            } while (bledy > 0);
        }
        if (bledy == 0)
        {
            cout << "Zablokowano możliwość zalogowania";
        }




    } while (bledy > 0);

exit:
    return 0;
}
