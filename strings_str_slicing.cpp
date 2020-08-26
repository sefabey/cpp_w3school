#include <iostream>
#include <string>
using namespace std;

int main() {

    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "Second char of the sth is: "<< txt[1]<< "\n";


    string txt2 = "Hello";
    txt2[0] = 'J';
    cout << "New pharase is: "<< txt2;
    return 0;
}
