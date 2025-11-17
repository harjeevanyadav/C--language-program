// write a cpp program to read a no. inside a function and return it to a main function.
#include <iostream>
using namespace std;
int readNumber() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    return num;
}
int main() {
    int number = readNumber();
    cout << "Your number: " << number << endl;
    return 0;
}