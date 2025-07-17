#include <iostream>
using namespace std;
int main() {
    int num, Num, remainder, result = 0;
    cin >> num;
    Num = num;
    while (Num != 0) {
        remainder = Num % 10;
        result += remainder * remainder * remainder;
        Num /= 10;
    }

    if (result == num)
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is not an Armstrong number." << endl;

    return 0;
}