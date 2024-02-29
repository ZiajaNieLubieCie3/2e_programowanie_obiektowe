#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char jezyk1[15] {"C++"};
    cout << jezyk1 << endl;
    
    char jezyk2[] {"C#"};
    cout << jezyk2 << endl;
    
    strcpy(jezyk2, "Java");
    cout << jezyk2 << endl;
    
    char *jezyk3 {"C"};
    cout << jezyk3 << endl;
    
    jezyk3 = "Java";
    cout << jezyk3 << endl;
    
    
}