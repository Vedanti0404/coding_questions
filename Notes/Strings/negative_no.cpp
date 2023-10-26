//count total number of negative elements in an array.
#include <bits/stdc++.h>
using namespace std;

int negative_ele(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " elements for the array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Enter elements of array: ";
        cin >> arr[i];
    }

    int negativeCount = negative_ele(arr, size);

    cout << "Total number of negative elements: " << negativeCount << endl;

    return 0;
}
