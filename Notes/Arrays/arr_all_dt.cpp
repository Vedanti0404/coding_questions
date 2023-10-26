#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout << "Enter the size: ";
    cin >> n;
    int int_arr[n];
    float float_arr[n];
    char char_arr[n];
    double double_arr[n];
    string string_arr[n];
  
  cout << "Enter " << n << " integer: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> int_arr[i];
    }
  cout << "Enter " << n << " float elements: " <<endl ;
    for (int i = 0; i < n; i++) {
        cin >> float_arr[i];
    }
  cout << "Enter " << n << " characters: " <<endl;
    for (int i = 0; i < n; i++) {
        cin >> char_arr[i];
    }
   cout << "Enter " << n << " double elements: " <<endl;
    for (int i = 0; i < n; i++) {
        std::cin >> double_arr[i];
    }
    cout << "Enter " << n << " strings: " <<endl;
    for (int i = 0; i < n; i++) {
        cin >> string_arr[i];
    }
    cout << "Integer Array: " <<endl;
    for (int i = 0; i < n; i++) {
      cout << int_arr[i] << " "<<endl;
    }
    cout << "Float Array: " <<endl;
    for (int i = 0; i < n; i++) {
      cout << float_arr[i] << " "<<endl;
    }
  cout << "Character Array: " <<endl;
    for (int i = 0; i < n; i++) {
       cout << char_arr[i] << " "<<endl;
    }
  cout << "Double Array: " <<endl;
    for (int i = 0; i < n; i++) {
        cout << double_arr[i] << " "<<endl;
    }
    cout << "string Array: " <<endl;
    for (int i = 0; i < n; i++) {
       cout << string_arr[i] << " "<<endl;
    }

return 0;
}
