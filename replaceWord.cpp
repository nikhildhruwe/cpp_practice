#include <iostream>
#include <cstring>
using namespace std;

int main(){
  string str1 = "Hi, This is Nikhil";
    
    cout << "Behore: " << str1 << endl;
    str1.replace(12, 6, "Jai");

    cout << "\nAfter: " << str1 << endl;
}