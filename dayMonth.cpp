#include <iostream>
using namespace std;

int main(){
    int day, month, march = 3, june = 6, flag;

    cout << "Enter a day between march 20 and june 20"<<endl;
    cout << "Enter Month: ";
    cin >> month;
    cout << "Enter Date: ";
    cin >> day;

if (( month>=march && month<=june)){
  if ((month==march)){
      if (((day>=20) && (day<=31)))
         flag = 1 ;
      else
        flag = 0;
    }
 else if (( (month>march) && (month<june) ))
    flag = 1 ;
 else if ((month == june)){ 
    if ((day<=20))
        flag = 1 ;
    else
        flag = 0;
    }
}
else
   flag = 0;

if (flag == 1)
   cout << "True.."<<endl;
else
cout << "False..."<<endl;
}