#include <algorithm>
#include <iostream>;
#include <bits/ranges_algo.h>
using namespace std;


    // PROBLEM 1

    // int n;
    // cout << "Enter the number of integers: ";
    // cin >> n;
    // int integer[n]={} , sum = 0;
    // for (int i = 1; i <= n; i++) {
    //     cin >> integer[i];
    //     sum += integer[i];
    // }
    // cout << "sum of the numbers is : " << sum << endl;

    // PROBLEM 2

    // int n;
    // cout << "Enter number of integers: ";
    // cin >> n;
    // int arr[n];
    // float avarage;
    // float sum = 0;
    // for (int i = 0; i < n; i++) {
    //     cin >> arr[i];
    //     sum += arr[i];
    // }
    // avarage = sum / n;
    // cout << avarage << endl;

    // PROBLEM 3

        // int n;
        // cout << "Enter number of integers: ";
        // cin >> n;
        // int arr[n];
        // for (int i = 0; i < n; i++) {
        //     cin >> arr[i];
        // }
        //     int min = arr[0];
        //
        // for (int i = 1; i < n; i++) {
        //     if (arr[i] < min) {
        //         min = arr[i];
        //     }
        // }
        // cout << "Min = " << min << endl;

    // PROBLEM 4

// int indexOfLargestElement(double array[], int size, int &largest_element) {
//     if (size <= 0) return -1;
//     for (int i = 0; i < size; i++) {
//         cin >> array[i];
//     }
//     int maxIndex = 0;
//     largest_element = array[0];
//     for (int j = 1; j < size; j++) {
//         if (array[j] >= largest_element) {
//             largest_element = array[j];
//             maxIndex = j;
//         }
//     }
//     return maxIndex;
// }
//
// int main() {
//     int size;
//     cout << "Enter size: ";
//     cin >> size;
//
//     if (size <= 0) {
//         cout << "-1\n";
//         return 0;
//     }
//     double array[size];
//     int largest_element = 0;
//     int index = indexOfLargestElement(array, size, largest_element);
//     cout << "Index " << index << endl;
//     cout << "Largest element: " << largest_element << endl;
//     return 0;
// }

//PROBLEM 5
// bool strictlyEqual(const int list1[], const int list2[], int size) {
//     for (int i = 0; i < size; i++) {
//         if (list1[i] != list2[i]) {
//             return false;  // If any element is different, return false
//         }
//     }
//     return true;  // If all elements are the same, return true
// }
//
// int main() {
//     int size;
//     cin >> size;
//
//     int list1[size], list2[size];  // Declare arrays after reading size
//
//     for (int i = 0; i < size; i++) {
//         cin >> list1[i];
//     }
//     for (int i = 0; i < size; i++) {
//         cin >> list2[i];
//     }
//
//     // Call strictlyEqual function
//     if (strictlyEqual(list1, list2, size)) {
//         cout << "YES" << endl;
//     } else {
//         cout << "NO" << endl;
//     }
//
//     return 0;
// }

// PROBLEM 7
// int main() {
//    int size;
//     cin >> size;
//     int array[size];
//     for (int i = 0; i < size; i++) {
//         cin >> array[i];
//     }
//     sort(array, array + size);
//     for (int i = 0; i < size; i++) {
//         cout << array[i] << " ";
//     }
//     cout << endl;
// }
//PROBLEM 8

// int main() {
//     int occurrences[6] = {0};
//     srand(time(0));
//
//     for (int i = 0; i < 10000; i++) {
//         int roll = rand() % 6;
//         occurrences[roll]++;
//     }
//
//     for (int i = 0; i < 6; i++) {
//         cout << "Face " << (i + 1) << ": " << occurrences[i] << " times" << endl;
//     }
// }

//PROBLEM 9

// void reverseArray(int arr[], int start, int end) {
//     while (start < end) {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }
//
// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//
//     reverseArray(arr, 0, n - 1);
//
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//
//     return 0;
// }

//PROBLEM 10

// bool isSorted(int arr[], int n) {
//     for (int i = 1; i < n; i++) {
//         if (arr[i] < arr[i - 1]) {
//             return false;
//         }
//     }
//     return true;
// }
//
// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//
//     if (isSorted(arr, n)) {
//         cout << "YES";
//     } else {
//         cout << "NO";
//     }
//
//     return 0;
// }


























