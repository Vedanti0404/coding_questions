#include <iostream>
using namespace std;
int main() {
    cout << "Enter the size of the array: ";
    int n;
    cin >> n;
    
    int arr[n];
    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int rev_arr[n];
    for (int i = 0; i < n; i++) {
        rev_arr[i] = arr[n - 1 - i];
    }

    cout << "Reversed array is: ";
    for (int i = 0; i < n; i++) {
        cout << rev_arr[i] << " ";
    }
   return 0;
}
