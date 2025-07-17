#include <iostream>
using namespace std;
int main() {
    int a, b; 
    double n, sum;
    cout << "Convert from (1: C, 2: F, 3: K): ";
    cin >> a;
    cout << "Enter temperature value: ";
    cin >> n;
    cout << "Convert to (1: C, 2: F, 3: K): ";
    cin >> b;
    if (a == 1 && b == 2) { 
        sum = (n * 9.0 / 5) + 32;
    } else if (a == 1 && b == 3) {
        sum = n + 273.15;
    } else if (a == 2 && b == 1) { 
        sum = (n - 32) * 5.0 / 9;
    } else if (a == 2 && b == 3) { 
        sum = (n - 32) * 5.0 / 9 + 273.15;
    } else if (a == 3 && b == 1) { 
        sum = n - 273.15;
    } else if (a == 3 && b == 2) { 
        sum = (n - 273.15) * 9.0 / 5 + 32;
    } else {
        cout << "Invalid input" << endl;
        return 1;
    }
    cout << "Converted temperature: " << sum << endl;
    return 0;
}