#include<bits/stdc++.h>
using namespace std;
int main() {
    int size;
   cout << "Enter the size of the array: ";
   cin >> size;
   int arr[size];
    for (int i = 0; i < size; i++) {
       cout << "Element " << i + 1 << ": ";
       cin >> arr[i];
    }
    int counts[size];
    for (int i = 0; i < size; i++) {
        counts[i] = 0;
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                counts[i]++;
            }
        }
    }
 cout << "Count of elements:" <<endl;
    for (int i = 0; i < size; i++) {
        int j;
        for ( j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                break;
            }
        }
        if( j == i) { 
        cout<< arr[i] << " - " << counts[i] <<endl;
        }
    }
return 0;
}





