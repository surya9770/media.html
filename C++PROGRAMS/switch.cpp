#include<iostream>//header file
using namespace std;
int main()//main body
{
    float m,n;
    cout<<"enter two numbers "<<endl;
    cin>>m>>n;
    char choice;
    cout<<"enter teh operator which operation you want to do "<<endl;
    cin>>choice;
    switch(choice)
    {
        case '+':
        cout<< m + n <<endl;
        break;
        case '-':
        cout<< m - n <<endl;
        break;
        case '*':
        cout<< m * n <<endl;
        break;
        case '/':
        cout<< m / n <<endl;
        break;
        case '%':
        cout<< m % n <<endl;
        break;
        default:
        cout<< "ENTER THE OPERATOR BETWEEN -{+,-,*,/,%} " <<endl;

        
    }
    return 0;

}
