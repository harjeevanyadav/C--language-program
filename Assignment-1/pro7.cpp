// write a cpp program to swap two no. using call by value.
#include <iostream>
using namespace std;
void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swap function: a = " << a << ", b = " << b << endl;
}
int main() {
    int x, y;
    cout << "Enter two numbers to swap: ";
    cin >> x >> y;
    cout << "Before swapping in main: x = " << x << ", y = " << y << endl;
    swap(x, y);
    cout << "After calling swap function in main: x = " << x << ", y = " << y << endl;
    return 0;
}