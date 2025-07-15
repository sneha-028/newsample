#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin << a ;
    cin << b;
    cout << "Initial values: a = " << a << ", b = " << b << "\n\n";
    a += b;
    cout << "After a += b; a = " << a << endl;
    a -= b;
    cout << "After a -= b; a = " << a << endl;
    a *= b;
    cout << "After a *= b; a = " << a << endl;
    a /= b;
    cout << "After a /= b; a = " << a << endl;
    a %= b;
    cout << "After a %= b; a = " << a << endl;
    a = 10;
    a <<= 1;
    cout << "After a <<= 1; a = " << a << endl;
    a >>= 1;
    cout << "After a >>= 1; a = " << a << endl;
    a &= b;
    cout << "After a &= b; a = " << a << endl;
    

   

    cout << "\n";

    

    return 0;
}
