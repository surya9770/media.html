//Example of hiding declared variables before a loop is:
#include <iostream>
using namespace std;
 
int main()
{
    int i = 0;
    while(i < 10) 
    {
        
        int an;
        cin>>an;
        cout << i << "dhkkn bhalu\n";
        i++;
    }
    //cout << "\n" << i;
    return 0;
}