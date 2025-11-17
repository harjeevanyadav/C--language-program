// write a cpp program to demonstrate default argument in a function.
// agar hum function calling ke time agr kisi parameter mai value pass nahi kar rahhe hai tou default usme previous jo value hai wah aa jayegi
#include <iostream>
using namespace std;
void displayInfo(string name, int age = 18) {
    cout << "Name: " << name << ", Age: " << age << endl;
}
int main() {
    string name;
    int age;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Do you want to enter your age? (y/n): ";
    char choice;
    cin >> choice;

    if (choice == 'y' || choice == 'Y') {
        cout << "Enter your age: ";
        cin >> age;
        displayInfo(name, age);
    } else {
        displayInfo(name);
    }

    return 0;
}