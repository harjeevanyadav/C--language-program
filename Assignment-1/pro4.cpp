// write a cpp program to demonstrate function overloading for addition of two number
#include <iostream>
using namespace std;
int add(int a, int b) {
    return a + b;
}
double add(double a, double b) {
    return a + b;
}
int main() {
    int int1, int2;
    double double1, double2;

    cout << "Enter two integers: ";
    cin >> int1 >> int2;
    cout << "The sum of " << int1 << " and " << int2 << " is: " << add(int1, int2) << endl;

    cout << "Enter two floating-point numbers: ";
    cin >> double1 >> double2;
    cout << "The sum of " << double1 << " and " << double2 << " is: " << add(double1, double2) << endl;

    return 0;
}