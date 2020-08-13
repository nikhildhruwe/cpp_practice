#include <iostream>
#include <ctime>
using namespace std;

int main(){
	srand(time(0));
   int random = rand() % 6 + 1;
   cout << "Random number generated : " << random << endl;
}
