// write a cpp program to swap no. using call by reference.
#include <iostream>
using namespace std;
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    int x, y;
    cout << "Enter two numbers to swap: ";
    cin >> x >> y;
    cout << "Before swapping in main: x = " << x << ", y = " << y << endl;
    swap(x, y);
    cout << "After swapping in main: x = " << x << ", y = " << y << endl;
    return 0;
}