#include <iostream>
using namespace std;
int main() {
    int size;
   cout << "Enter the size of the array: ";
   cin >> size;
    int arr[size];
    cout << "Enter the elements of the array:" <<endl;
    for (int i = 0; i < size; i++) { 
       cout << "Element " << i + 1 << ": ";
       cin >> arr[i];
    }
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                cout << "Duplicate number is: " << arr[i] <<endl;
            }
        }
    }  

    return 0;
}

