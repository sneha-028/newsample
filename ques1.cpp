#include <iostream>
using namespace std;

int main() {
    int n, i, ans = 0;
    cin >> n;
    if (n <= 1) {
        cout << n << " is not a prime number." << endl;
    } else {
        for (i = 2; i < n; i++) {
            if (n % i == 0) {
                ans = 1;
                break;
            }}
        if (ans == 0)
            cout << n << " is a prime number." ;
        else
            cout << n << " is not a prime number." ;
    }
    return 0;
}
