#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int arr[1653]; 
   
    int sum = 0;
    for(int i = 0; i < n - 1; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    int total = n * (n + 1) / 2;
    int missing = total - sum;

    cout << "Missing number is- " << missing << endl;

    return 0;
}

















