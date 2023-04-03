#include<iostream>
#include<string>//here we using the string in this file
using namespace std;
main()
{
    string value[]={"monday","tuesday","wednesday",
    "thursday","friday","saturday","sunday"};
    char value2[50];
   surya: cout<<"Enter the day in small letters:-"<<endl;
    cin >> value2;
    if(value2==value[0])
    {
        cout<<"Aj Monday hai aur ye ek special din hai"<<endl;
        cout<<"Aj ke lectures ki timing hai:-"
        <<endl<<"DBMS- 10:30 se 12:30 (Kastwar madam)"
        <<endl<<"WEB TECHNOLOGY- 12:30 se 01:30 (Kaurav sir)"
        <<endl<<"COMPUTER  NETWORK- 02:00 to 04:00 (Jain sir)"
        <<endl<<"P.D.- 04:00 se 05:00";
    }
    else if (value2==value[1])
    {
        cout<<"Aj Tuesday hai aur ye ek special din hai "<<endl;
        cout<<"Aj ke lectures ki timing hai:-"
        <<endl<<"COMPUTER NETWORK- 10:30 to 12:30 (Jain sir)"
        <<endl<<"LINUX SHELL PROGRAMMING- 12:30 to 01:30 (Kaurav sir)"
        <<endl<<"DBMS- 02:00 se 03:00 (Kastwar madam)"
        <<endl<<"WEB TECHNOLOGY(LAB)- 03:00 to 05:00(Adkane sir)";
    }
    else if(value2==value[2])
    {
        cout<<"Aj Wednesday hai aur ye ek special din hai "<<endl;
        cout<<"Aj ke lectures ki timing hai:-"
        <<endl<<"DBMS- 10:30 to 11:30 (Kastwar madam)"
        <<endl<<"WEB TECHNOLOGY- 11:30 to 01:30 (Kaurav sir)"
        <<endl<<"COMPUTER NETWORK(LAB)- 02:00 to 04:00(Jain sir)"
        <<endl<<"P.D.- 04:00 to 05:00";
    }
    else if(value2==value[3])
    {
        cout<<"Aj Thursday hai aur ye ek special din hai "<<endl;
        cout<<"Aj ke lectures ki timing hai:-"
        <<endl<<"COMPUTER NETWORK- 10:30 to 12:30 (Jain sir)"
        <<endl<<"WEB TECHNOLOGY(LAB)- 12:30 to 01:30 (Adkane sir)"
        <<endl<<"DBMS- 02:00 to 04:00 (Kastwar madam)"
        <<endl<<"P.D.- 04:00 to 05:00";
    }
    else if(value2==value[4])
    {
        cout<<"Aj Friday hai aur ye ek special din hai "<<endl;
        cout<<"Aj ke lectures ki timing hai:-"
        <<endl<<"DBMS- 10:30 to 11:30 (Kastwar madam)"
        <<endl<<"WEB TECHNOLOGY- 11:30 to  01:30 (Kaurav sir)"
        <<endl<<"LINUX SP(LAB)- 02:00 to 05:00(Adkane sir)";
    }
    else if(value2==value[5])
    {
        cout<<"Aj Saturday hai aur ye ek special din hai "<<endl;
        cout<<"Aj ke lectures ki timing hai:-"
        <<endl<<"LINUX SHELL PROGRAMMING - 10:30 to 12:30 (Kaurav sir)"
        <<endl<<"DBMS- 12:30 to 01:30 (Kastwar madam)"
        <<endl<<"WEB TECHNOLOGY(LAB)-02:00 to 04:00 (Adkane sir)"
        <<endl<<"P.D.- 04:00 to 05:00";
    }
    else if(value2==value[6])
    {
        cout<<"Aj Sunday hai aur iski bahut value hai"<<endl;
        cout<<"THodasa rest krke ap kuchh subjects ka revision kr lijiye"<<endl;
    }
    else
    {
        cout<<"ERROR!"<<endl;//   for wrong input it displays the error
        cout<<"O smjhdar 'INSAN' week ke nam  ko small letters mai hi dalo "<<endl;
        cout<<"Apna answer monday se sunday tk hi dijiye"<<endl;
        cout<<"Aur ha apne day ki spelling jrur check krna"<<endl;
        goto surya;
    }
}
