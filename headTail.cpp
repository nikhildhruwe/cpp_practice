#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
     srand(time(0));
    int headCounter = 0, tailCounter = 0, head = 1, tail = 0;

    while(headCounter<11 && tailCounter<11){
        int coin = rand() % 2;
        if (coin == head){
            cout <<"Heads Won \n";
            headCounter++;
        }
        else
        {
            cout<<"Tails Won\n";
            tailCounter++;
        }
    }

    cout<<"Total times head won:"<<headCounter<<endl;
    cout<<"Total times tail won:"<<tailCounter<<endl;
}