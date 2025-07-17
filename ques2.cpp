#include <iostream>
using namespace std;
int main() {
    int n, sum = 0;
    cin >> n;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    if (sum == n) {
        cout << n << " is a Perfect number." << endl;
    } else {
        cout << n << " is not a Perfect number." << endl;
    }
    return 0;
}