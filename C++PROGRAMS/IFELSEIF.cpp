//A PROGRAM FIR FINDING THE MAXIMUM NUMBERAMING 3 THREE
#include<iostream>
using namespace std;

int main()
{
    
    int a , b,c;
    cin>>a>>b>>c;

    if(a>b){
        if(a>c){
            cout<<a<<endl;

        }
        else{
            cout<<c<<endl;

        }
    }
    else{
        if(b>c)
        {
            cout<<c<<endl;
        }
    }

    
    return 0;
}