#include <iostream>
using namespace std;

int main(){
    int start, end, number, count = 0;
    int array[20];

    cout << "Enter starting number: "<< endl;
    cin >> start;
    cout << "Enter last number: "<< endl;
    cin >> end;

    for ( number = start ; number < end ; number++){
        if ((number / 10) == 0 )
            continue;
        
        int flag = 0;
        int temp = number;
        int remainder = temp % 10;
        while ( temp ){
           int  remainder1 = temp % 10;
            if ( remainder != remainder1)
                flag = 1;
            remainder = remainder1;
            temp = temp / 10;
        }

        if ( flag != 1)
            array[count++] = number;
    }

    cout << "Numbers with repeated digits in given range are :" << endl;
    for (int i = 0; i < count ; i++)
        cout << array[i] << " ";
}