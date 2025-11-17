// write a cpp program to multiply two no. using function with argument and return value.
#include <iostream>
using namespace std;
int multiply(int a, int b) {
    return a * b;
}
int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    int multiplication = multiply(x, y);
    cout << "The product of " << x << " and " << y << " is: " << multiplication << endl;
    return 0;
}