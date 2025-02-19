#include <iostream>
using namespace std;
int main() {
    //PROBLEM 1.1
    // int number;
    // for (int number = 1; number <= 10; number++) {
    //     cout << number << " ";
    // }
    //PROBLEM 1.2
    // int number,n;
    // cout << "Enter a number : ";
    // cin >> n;
    // for (number = 1; number <= n; number++)
    //     cout << number << " ";
    //PROBLEM 1.3
    // int number,sum;
    // sum=0;
    // for (number = 1; number <=10; number++)
    //     sum += number;
    // cout << sum << endl;
    //PROBLEM 1.4
    // int number,sum;
    // cout << "Enter a number: ";
    // cin >> number;
    // sum = 0;
    // for (int s = 1; s <= number; s++) {
    //     sum += s;
    // }
    // cout << sum << " " << endl;
    //PROBLEM 1.5
    // int i,sum=0;
    // float average;
    // for (i=1; i <= 10; i++) {
    //     sum += i;
    //     average= sum/10.0;
    //     }
    // cout << "The average is " << average << endl;
    //PROBLEM 1.6
    // int i,sum=0;
    // float average,num;
    //  cout<<"Enter a number: ";
    //  cin >> num;
    //  for(i=1;i<=num;i++) {
    //      sum += i;
    //      average =sum/num;
    //  }
    // cout << "Average = " << average;
    // PROBLEM 2.1
     // int number;
     // for (int number = 1; number <= 10; number++) {
     //     if (number%2 == 1)
     //         cout << number << " ";
     //     else
     //         cout;
     // }
    // PROBLEM 2.2
    // int number;
    // for (int number = 1; number <= 10; number++) {
    //     if (number%2 == 0)
    //         cout << number << " ";
    //     else
    //         cout;
    // }
    // PROBLEM 2.3
    // int number,i;
    // cout << "Enter a number: ";
    // cin >> number;
    // for (int i = 1; i <= number; i+=2) {
    //     if (number%2 == 1)
    //         cout << i << " ";
    //     else
    //         cout << i+0 ;
    // }
    // PROBLEM 2.4
    // int number,i;
    // cout << "Enter a number: ";
    // cin >> number;
    // for (int i = 0; i <= number; i+=2) {
    //     if (number%2 == 0)
    //         cout << i << " ";
    //     else
    //         cout << i << " ";
    // }
    // PROBLEM 2.5
    // for (int i = 0; i <= 100; i+=10) {
    //     if (i % 10 == 0);
    //     cout << i << " ";
    // }
    // PROBLEM 2.6
// int n,i;
//     cout << "Enter a number: ";
//     cin >> n;
//     for (i = 0; i <= n; i+=10) {
//         if (i % 10 == 0) {}
//         cout << i << " ";
//     }
    // PROBLEM 3
    // int num=0;
    // for (char i='A';i<='Z';i++) {
    //     cout << i << " " ;
    //     num++;
    //     if (num%5==0)
    //         cout << endl;
    //
    // }
    // PROBLEM 4
//     int num,num1,mm;
//     cout << "Enter a number: ";
//     cin >> num;
// for ( num1 = 1; num1 <= mm; num1++)
//     if ( num > 0 )
//         mm = num*num1;
//
//     else (num < 0);
//         cout << "Factorial of a negative number is not defined." << endl;
//     cout << "Factorial of " << num << " is " << mm << " " ;
    //Problem8
        // int n;
        // cout << "Enter the number of rows: ";
        // cin >> n;
        //
        // for (int i = 1; i <= n; i++) {
        //     for (int j = 1; j <= i; j++) {
        //         cout << "*";
        //     }
        //     cout << endl;
        // }
    //Problem9
        // int num, i;
        // bool isPrime = true;
        //
        // cout << "Enter a number: ";
        // cin >> num;
        //
        // if (num <= 1) {
        //     isPrime = false;
        // } else {
        //     for (i = 2; i * i <= num; i++) {
        //         if (num % i == 0) {
        //             isPrime = false;
        //             break;
        //         }
        //     }
        // }
        //
        // if (isPrime)
        //     cout << num << " is a prime number." << endl;
        // else
        //     cout << num << " is not a prime number." << endl;

    //Problem10
    //      int n, sum = 0;
    // cout << "Enter the value of n: ";
    // cin >> n;
    //
    // for (int i = 1; i <= n; i++) {
    //         cout << i << " * " << i << " = " << (i * i) << endl;
    //         sum += (i * i);
    //     }
    // cout << "Sum of the series: " << sum << endl;

    //Problem12
    // int n, reversed = 0;
    //
    //     cout << "Enter a number: ";
    //     cin >> n;
    //
    //     cout << "Output: ";
    //     while (n > 0) {
    //         cout << n % 10;
    //         n /= 10;
    //     }
    //     cout << endl;

    //Problem13
// ;       int n;
//
//         cout << "Enter a number: ";
//         cin >> n;
//
//         if (n == 0) {
//             cout << "The depth is 0" << endl;
//         } else {
//             for (int i = 1; i <= n; i++) {
//                 for (int j = 1; j <= i; j++) {
//                     cout << i;
//                 }
//                 cout << endl;
//             }
//         }

    //Problem14
    // long long binary;
    //     int decimal = 0, i = 0, digit;
    //
    //     cout << "Enter a binary number: ";
    //     cin >> binary;
    //
    //
    //     long long temp = binary;
    //     int length = 0;
    //
    //     for (; temp > 0; temp /= 10) {
    //         length++;
    //     }
        // for (temp = binary, i = 0; i < length; temp /= 10, i++) {
        //     digit = temp % 10;
        //     decimal += digit * pow(2, i);
        // }
        //
        // cout << "The decimal number is " << decimal << endl;
    return 0;
}
