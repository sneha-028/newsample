#include <iostream>
using namespace std;
int main() {
    int age;
    double salary;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your salary: ";
    cin >> salary;
    if (age >= 21 && age <= 60 && salary >= 30000) {
        cout << "You are eligible for the loan." << endl;
    } else {
        cout << "You are not eligible for the loan." << endl;
    }

    return 0;
}

