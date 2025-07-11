#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[1270]; 

    cout << "Enter " << n << " sorted elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int temp[100];
    int j = 0;

    for(int i = 0; i < n; i++) {
        if(i == 0 || arr[i] != arr[i - 1]) {
            temp[j++] = arr[i];
        }
    }

    cout << "removing duplicates:\n";
    for(int i = 0; i < j; i++) {
        cout << temp[i] << " ";
    }

    return 0;
}