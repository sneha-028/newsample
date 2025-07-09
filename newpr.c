
// #include <iostream>
// using namespace std;

// // int main() {
   
// //     int a;
// //     cin>>a;
// //     if((a%4==0&&a%100!=0) || a%400==0){
// //         cout<<"this is a leap year";
// //     }
// //     else{
// //         cout<< "Not a leap year";
// //     }
// //     return 0;
// // }

// // 






 #include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;

   
    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
        ch == 'a' || ch == 'e' || ch== 'i' ||  ch== 'o' || ch== 'u' ) {
            cout<< "Vowels";
        }
        else{
            cout<< "Consonant";
        }
        return 0;
    }



// int main() {
//     int a, b, c;
//     cin >> a >> b >> c;

//     if (a >= b && a >= c) {
//         cout << a;
//     } else if (b >= a && b >= c) {
//         cout << b;
//     } else {
//         cout << c;
//     }
// }


//      int a;
//     cin>>a;
//     if((a%4==0&&a%100!=0) || a%400==0){
//         cout<<"this is a leap year";
//     }
//     else{
//         cout<< "Not a leap year";
//     }

//     int main() {
//     int a;
//     cin>>a;
//     if(a>=90){
//         cout<<"A";

//     }
//     if(a<90 && a>=80){
//         cout<<"B";
//     }
//     if(a<80 && a>=70){
//         cout<<"C";
//     }
//     if(a<70 && a>=60){
//         cout<< "D";
//     }
//     else{
//         cout<< "F" ;
    
//     }

//     return 0;

// }

#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        cout << "It is an alphabet.";
    }
    else if (ch >= '0' && ch <= '9') {
        cout << "It is a digit.";
    }
    else {
        cout << "It is a special character.";
    }

    return 0;
}