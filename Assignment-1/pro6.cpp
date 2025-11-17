// write a cpp program using an inline function to calculate a square of the number.
#include <iostream>
using namespace std;
inline int square(int n) {
    return n * n;
}
int main() {
    int num;
    cout << "Enter a number to calculate its square: ";
    cin >> num;
    cout << "The square of " << num << " is: " << square(num) << endl;
    return 0;
}