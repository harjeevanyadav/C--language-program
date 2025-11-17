// write a cpp program to find the maximum of two numbers using a function.
#include <iostream>
using namespace std;
void maximum(int a, int b)
{
    if (a > b)
    {
        cout << a << " is maximum" << endl;
    }
    else
    {
        cout << b << " is maximum" << endl;
    }
}
int main()
{
    int num1, num2;
    cout << "enter two numbers:" << endl;
    cin >> num1 >> num2;
    maximum(num1, num2);
    return 0;
}