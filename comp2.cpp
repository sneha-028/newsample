#include <iostream>
#include <bitset>
using namespace std;
int main() {
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Binary of " << a << " = " << bitset<8>(a) << endl;
    cout << "Binary of " << b << " = " << bitset<8>(b) << endl;
    int andresult = a & b;
    int orresult = a | b;
    int xorresult = a ^ b;
    int norresult = ~(a | b);  
    cout << "AND: " << andresult << " = " << bitset<8>(andresult) << endl;
    cout << "OR : " << orresult  << " = " << bitset<8>(orresult) << endl;
    cout << "XOR: " << xorresult << " = " << bitset<8>(xorresult) << endl;
    cout << "NOR: " << norresult << " = " << bitset<8>(norresult) << endl;

    return 0;
}





