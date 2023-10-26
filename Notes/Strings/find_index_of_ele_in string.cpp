#include <bits/stdc++.h>

using namespace std;

int main() {
  string str1, key;
  cout << "Enter the string: ";
  cin >> str1;
  cout << "Enter the key: ";
  cin >> key;

  int index = -1;
  for (int i = 0; i < str1.length(); i++) {
    bool found = true;
    for (int j = 0; j < key.length(); j++) {
      if (str1[i + j] != key[j]) {
        found = false;
        break;
      }
    }
    if (found) {
      index = i;
      break;
    }
  }

  if (index == -1) {
    cout << "Key not found" << endl;
  } else {
    cout << "Key found at index " << index << endl;
  }

  return 0;
}

