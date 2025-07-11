// FREQUENCY
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter number of elements: ";
//     cin >> n;

//     int arr[100];
//     cout << "Enter " << n << " elements:\n";
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     cout << "Frequencies:\n";
//     for(int i = 0; i < n; i++) {
//         int count = 1;

       
//         bool isCounted = false;
//         for(int k = 0; k < i; k++) {
//             if(arr[i] == arr[k]) {
//                 isCounted = true;
//                 break;
//             }
//         }
//         if(isCounted)
//             continue;

//         for(int j = i + 1; j < n; j++) {
//             if(arr[i] == arr[j]) {
//                 count++;
//             }
//         }

//         cout << arr[i] << " appears " << count << " times\n";
//     }

//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100]; 
    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    cout << "Reversed array:\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
