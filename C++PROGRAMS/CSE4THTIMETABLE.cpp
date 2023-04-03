//This is the program fir the timetable fr the year of 2023 (feb to march) for cse students
#include<iostream>//header file
using namespace std;
int main()//main body
{
    anjali:
    int n;//defining variable for chosing the day
    cout<<"NAMASTE!!"<<endl;
    cout<<"COMPUTER SCIENCE 4th SEM 'STUDENTS'Apko aj ke classes ki timing btate hai "<<endl;
    cout<<" MONDAY ke liye -->'1' press kre"
    <<endl<<"TUESDAY ke liye -->'2' press kre"
    <<endl<<"WEDNESDAY ke liye -->'3' press kre"
    <<endl<<"THURSDAY ke liye -->'4' press kre"
    <<endl<<"FRIDAY ke liye -->'5' press kre"
    <<endl<<"SATURDAY ke liye -->'6' press kre"
    <<endl<<"SUNDAY ke liye -->'7' press kre"<<endl;
    cout<<"Apna answer 1 se 7 ke bich me hi de-->"<< endl;
    cin>>n;
     if(n == 1,2,3,4,5,6,7)
    {
    goto surya;
    }
   surya: switch(n)// FOR CHOOSING ONE OF THE DAY 
      {
        case 1 ://MONDAY
        cout<<"Aj Monday hai aur ye ek special din hai"<<endl;
        cout<<"Aj ke lectures ki timing hai:-"
        <<endl<<"DBMS- 10:30 se 12:30 (Kastwar madam)"
        <<endl<<"WEB TECHNOLOGY- 12:30 se 01:30 (Kaurav sir)"
        <<endl<<"COMPUTER  NETWORK- 02:00 to 04:00 (Jain sir)"
        <<endl<<"P.D.- 04:00 se 05:00";
        break;

        case 2 ://TUESDAY
        cout<<"Aj Tuesday hai aur ye ek special din hai "<<endl;
        cout<<"Aj ke lectures ki timing hai:-"
        <<endl<<"DBMS- 10:30 to 11:30 (Kastwar madam)"
        <<endl<<"COMPUTER NETWORK- 11:30 to 01:30 (Jain sir)"
        <<endl<<"LINUX SHELL PROGRAMMING- 02:00 to 03:00 (Kaurav sir)"
        <<endl<<"WEB TECHNOLOGY(LAB)- 03:00 to 05:00(Adkane sir)";
        break;

        case 3 ://WEDNESDAY
        cout<<"Aj Wednesday hai aur ye ek special din hai "<<endl;
        cout<<"Aj ke lectures ki timing hai:-"
        <<endl<<"DBMS- 10:30 to 11:30 (Kastwar madam)"
        <<endl<<"WEB TECHNOLOGY- 11:30 to 01:30 (Kaurav sir)"
        <<endl<<"COMPUTER NETWORK(LAB)- 02:00 to 04:00(Jain sir)"
        <<endl<<"P.D.- 04:00 to 05:00";
        break;

        case 4 ://THURSDAY
        cout<<"Aj Thursday hai aur ye ek special din hai "<<endl;
        cout<<"Aj ke lectures ki timing hai:-"
        <<endl<<"DBMS- 10:30 to 11:30(Kastwar madam)"
        <<endl<<"COMPUTER NETWORK- 11:30 to 01:30 (Jain sir)"
        <<endl<<"DBMS- 02:00 to 03:00 (Kastwar madam)"
        <<endl<<"WEB TECHNOLOGY(LAB)- 03:00 to 04:00 (Adkane sir)"
        <<endl<<"P.D.- 04:00 to 05:00";
        break;

        case 5 ://FRIDAY
        cout<<"Aj Friday hai aur ye ek special din hai "<<endl;
        cout<<"Aj ke lectures ki timing hai:-"
        <<endl<<"DBMS- 10:30 to 11:30 (Kastwar madam)"
        <<endl<<"WEB TECHNOLOGY- 11:30 to  01:30 (Kaurav sir)"
        <<endl<<"LINUX SP(LAB)- 02:00 to 05:00(Adkane sir)";
        break;

        case 6 ://SATURDAY
        cout<<"Aj Saturday hai aur ye ek special din hai "<<endl;
        cout<<"Aj ke lectures ki timing hai:-"
        <<endl<<"DBMS- 10:30 to 11:30 (Kastwar madam)"
        <<endl<<"LINUX SHELL PROGRAMMING - 11:30 to 01:30 (Kaurav sir)"
        <<endl<<"WEB TECHNOLOGY(LAB)- 02:00 to 04:00 (Adkane sir)"
        <<endl<<"P.D.- 04:00 to 05:00";
        break;

        case 7 ://SUNDAY
        cout<<"Aj Sunday hai aur iski bahut value hai"<<endl;
        cout<<"THodasa rest krke ap kuchh subjects ka revision kr lijiye"<<endl;
        break;

        cout<<"    "<<endl;
        cout<<"RECESS 1:30 se 2:00  bje tak rhega "<<endl;
        cout<<"Hava a nice day"<<endl;

        default:
        cout<<"ERROR!"<<endl;//   for wrong input it displays the error
        cout<<"O smjhdar 'INSAN' week mai 7 hi din hote hai thik hai "<<endl;
        cout<<"Apna answer 1 se 7 tk hi dijiye"<<endl;
        goto anjali;
        break;
      }
    return -1;
}
