// write a cpp program find sum of two no with function with arguments without return value.
#include <iostream>
using namespace std;
void sum(int a, int b) {
    int result = a + b;
    cout << "The sum of " << a << " and " << b << " is: " << result << endl;
}
int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    sum(x, y);
    return 0;
}