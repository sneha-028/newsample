#include <iostream>
using namespace std;
int main() {
    int arr[980];
    int temp,j,n,i;
    cin>> n;
    for(i=0;i<n;i++){
    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp ;
            }
        }

    }
}
    cout<< arr[n-1]<<endl;
    cout<< arr[0];
return 0;
}