#include<bits/stdc++.h>
using namespace std;
int main(){
  int size;
  cout << "Enter the size of the array: ";
  cin >>size;

  int arr[size];
  for (int i = 0; i <size; i++) {
    cout << "Enter elements: ";
    cin >> arr[i];
  }

  vector<int> even;
  vector<int> odd;

  int i = 0;
  while (i < size) {
    if (arr[i] % 2 == 0) {
      even.push_back(arr[i]);
    } else {
      odd.push_back(arr[i]);
    }
    i++;
  }
  cout << "Even numbers: ";
  for (int i = 0; i < even.size(); i++) {
    cout << even[i] << " ";
  }
  cout << endl;

  cout << "Odd numbers: ";
  for (int i = 0; i < odd.size(); i++) {
    cout << odd[i] << " ";
  }
cout << endl;

return 0;
}