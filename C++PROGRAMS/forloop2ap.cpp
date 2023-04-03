//Example of hiding declared variables before a loop is:
#include <iostream>
using namespace std;
 
int main()
{
    int i = 99;
    for (int i = 0; i < 5; i++) 
    {
        cout << i << " /t";
    }
    cout << "\n" << i;
    return 0;
}