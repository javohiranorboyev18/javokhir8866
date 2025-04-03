#include <iostream>
#include <string>
#include <algorithm>
#include <set>
using namespace std;
int main() {
    //PROBLEM1.string
    // string string1;
    // int countvowel=0,countconsonant=0;
    // cout<<"Please enter a string only use lowercase letter: ";
    // cin>>string1;
    // for(int i=0;i<string1.length();i++) {
    //     if (string1[i]=='a'string1[i]=='e'||string1[i]=='i'||string1[i]=='o'||string1[i]=='u') {
    //         countvowel++;
    //     }
    //     else
    //         countconsonant++;
    // }
    // cout<<"The number of vowels:"<<countvowel<<endl;
    // cout<<"The number of consonants:"<<countconsonant<<endl;

    //PROBLEM2
    // string str;
    // cout<<"Please enter a string: ";
    // cin>>str;
    // reverse(str.begin(),str.end());
    // cout<<str<<endl;

    //PROBLEM3
    //     string str;
    //     cout << "Please enter a string:" << endl;
    //     cin >> str;
    //     int i=0;
    //     bool isPalindrome=true;
    //     int len=str.length()-1;
    //     while (i<=len) {
    //         if (str[i]!=str[len]) {
    //             isPalindrome=false;
    //             break;
    //         }
    //
    //         i++;
    //         len--;
    //     }
    //     if (isPalindrome==true) {
    //         cout<<"Your string is palindrome"<<endl;
    //
    //     }
    // else
    //     cout<<"Your string is not palindrome"<<endl;


    //PROBLEM4
    // string str;
    // cout<<"Please enter lowercase letters:";
    // cin>>str;
    // int frequency[26]={0};
    // for(int i=0;i<str.size();i++) {
    //     frequency[str[i]-'a']++;
    // }
    // int max_freq=frequency[0];
    // for(int i=0;i<26;i++) {
    //     if (frequency[i]>=max_freq&&frequency[i]!=0) {
    //         max_freq=frequency[i];
    //         cout<<char(i+'a')<<" ";
    //     }
    //
    // }

    //PROBLEM5
    // string str;
    // cout << "Please enter a string" << endl;
    // cin >> str;
    // set<char>uniqueChars(str.begin(), str.end());
    // for (char c : uniqueChars) {
    //     cout<<c;
    // }

    //PROBLEM6
    // string sentence;
    // cout << "Please enter the sentence: ";
    // getline(cin, sentence);
    // int len=0;
    // string longestword="",currentWord="";
    // for (int i = 0; i < sentence.length(); i++) {
    //     if (sentence[i] == ' ' sentence[i]=='\0') {
    //         if (currentWord.length() > len) {
    //             longestword = currentWord;
    //             len=currentWord.length();
    //
    //         }
    //         currentWord="";
    //     }
    //     else {
    //         currentWord += sentence[i];
    //     }
    // }
    // cout<<longestword;

    //PROBLEM7
    //     string str1,str2;
    //     cout<<"Please enter the str1 and str2:";
    //     cin>>str1>>str2;
    //     int freqeuncy1[26]={0};
    //     int freqeuncy2[26]={0};
    //     bool isanagrams=true;
    //     for(int i=0;i<str1.length();i++) {
    //         freqeuncy1[str1.at(i)-97]++;
    //     }
    //     for(int i=0;i<str2.length();i++) {
    //         freqeuncy2[str2.at(i)-97]++;
    //     }
    //     for(int i=0;i<26;i++) {
    //         if(freqeuncy1[i]!=freqeuncy2[i]) {
    //             isanagrams=false;
    //         }
    //     }
    //     if(isanagrams) {
    //         cout<<"Yes";
    //     }
    //     else {
    //         cout<<"No";
    //     }
    // }

    // int main() {
    //     int n;
    //     cout<<"Please enter n:";
    //     cin>>n;
    //     int arr[n];
    //     int size=sizeof(arr)/sizeof(arr[0]);
    //     for(int i=0;i<n;i++) {
    //         cin>>arr[i];
    //     }
    //     int frequency[size]={0};
    //     for(int i=0;i<n;i++) {
    //         frequency[arr[i]]++;
    //     }
    //     for(int i=0;i<n;i++) {
    //         if (frequency[i]!=0) {
    //             cout<<i<<"-"<<frequency[i]<<endl;
    //         }
    //     }
    // return 0;
    // }
    //
    //PROBLEM1
    // int main() {
    //     int row, column;

//     cout<<"Enter the number of rows and column:";
    //     cin>>row>>column;
    //     int matrix[row][column];
    //     cout<<"Enter the elements of the matrix:";
    //     for(int i=0;i<row;i++) {
    //         for(int j=0;j<column;j++) {
    //             cin>>matrix[i][j];
    //         }
    //     }
    //         int sum=0;
    //         for(int k=0;k<row;k++) {
    //             for(int l=0;l<column;l++) {
    //                 sum+=matrix[k][l];
    //
    //             }
    //         }
    //     cout<<"The sum of the matrix is: "<<sum;
    //     return 0;
    //     }
    //PROBLEM2
    // int main() {
    //     int row, column;
    //     cout<<"Enter the number of rows and column:";
    //     cin>>row>>column;
    //     int matrix[row][column];
    //     cout<<"Enter the elements of the matrix:";
    //     for(int i=0;i<row;i++) {
    //         for(int j=0;j<column;j++) {
    //             cin>>matrix[i][j];
    //         }
    //     }
    //     for(int i=0;i<row;i++) {
    //         int max=matrix[i][0];
    //         for(int j=0;j<column;j++) {
    //             if (matrix[i][j]>max) {
    //                 max=matrix[i][j];
    //             }
    //
    //
    //         }
    //         cout<<"Maximum value of "<<i+1<<" row is "<<max<<endl;
    //     }
    // }

    //Problem3
    // int main() {
    //     int row, column;
    //     cout<<"Enter the number of rows and column:";
    //     cin>>row>>column;
    //     int matrix[row][column];
    //     cout<<"Enter the elements of the matrix:";
    //     for(int i=0;i<row;i++) {
    //         for(int j=0;j<column;j++) {
    //             cin>>matrix[i][j];
    //         }
    //     }
    //     for (int j=0;j<column;j++) {
    //         int sum=0;
    //         for(int i=0;i<row;i++) {
    //             sum+=matrix[i][j];
    //         }
    //         cout<<"Sum of "<<j+1<<" row is "<<sum<<endl;
    //     }
    // }
    //PROBLEM4
    // int main() {
    //     int row;
    //     cout<<"Please enter the row and column:";
    //     cin>>row;
    //     int arr[row][row];
    //     cout<<"Please enter the elements:";
    //     for(int j=0;j<row;j++) {
    //         for(int k=0;k<row;k++) {
    //             cin>>arr[j][k];
    //         }
    //     }
    //     int sum=0;
    //         for(int i=0;i<row;i++) {
    //             sum+=arr[i][i];
    //             if (i==row-1)
    //                 cout<<"The sum is "<<sum;

    //PROBLEM5
    // int main() {
    //     int row, column;
    //     cout<<"Enter the number of rows and column:";
    //     cin>>row>>column;
    //     int matrix[row][column];
    //     cout<<"Enter the elements of the matrix:";
    //     for(int i=0;i<row;i++) {
    //         for(int j=0;j<column;j++) {
    //             cin>>matrix[i][j];
    //         }
    //     }
    //     for (int i=0;i<column;i++) {
    //         for (int j=0;j<row;j++) {
    //             cout<<matrix[j][i]<<" ";
    //         }
    //         cout<<endl;
    //     }
    // }
    //PROBLEM6\
    // int row,column;
    // int matrix[row][column];
    // cout << "Enter row and column numbers" << endl;
    // cin >> row >> column;
    // for (int i = 0; i < row; i++) {
    //     for (int j = 0; j < column; j++) {
    //         cin >> matrix[i][j];
    //     }
    //
    // }
    // for (int i = 0; i < row; i++) {
    //     for (int j = 0; j < column; j++) {
    //         int sum=0;
    //         for (int k = 0; k < row; k++) {
    //             sum+=matrix[i][k]*matrix[k][j];
    //             cout<<sum<<" "<<endl;
    //         }
    //     }
    // }


    //PROBLEM7
    // int main() {
    //     int row,column;
    //     cout << "Enter row and column numbers:" << endl;
    //     cin >> row >> column;
    //     int matrix[row][column];
    //     for (int i = 0; i < row; i++) {
    //         for (int j = 0; j < column; j++) {
    //             cin >> matrix[i][j];
    //         }
    //     }
    //     int matrix2[column][row];
//     for (int i=0; i<row; i++) {
    //         for (int j=0; j<column; j++) {
    //             matrix2[j][i]=matrix[i][j];
    //         }
    //     }
    //
    //
    //     for (int i = 0; i < row; i++) {
    //         for (int j = 0, k = row - 1; j < k; j++, k--) {
    //             int temp = matrix[i][j];
    //             matrix[i][j] = matrix[i][k];
    //             matrix[i][k] = temp;
    //         }
    //     }
    //
    //     for (int i = 0; i < row; i++) {
    //         for (int j = 0; j < row; j++) {
    //             cout << matrix[i][j] << " ";
    //         }
    //         cout<<endl;
    //     }
    // }
}