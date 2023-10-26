#include<bits/stdc++.h>
using namespace std;
int main() {
  string s;
   cout << "Enter the string: ";
   getline(cin,s);
   string arr[s];
    for (int i = 0; i < s; i++) {
       cout << "Element " << i + 1 << ": ";
       cin >> arr[i];
    }
    int counts[s];
    for (int i = 0; i < s; i++) {
        counts[i] = 0;
    }
    for (int i = 0; i < s; i++) {
        for (int j = 0; j < s; j++) {
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





