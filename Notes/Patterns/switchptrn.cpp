#include<bits/stdc++.h>
using namespace std;
void P1() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << "\n";
    }
}
void P2() {
    for (int i = 5; i > 0; i--) {
        for (int j = 1; j <=i; j++) {
               cout<<"*";
        }
        cout <<"\n"; 
    }
}
void P3() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <=5-i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) {
           cout << "*";
        }
        cout << "\n";
    }
}

void P4() {
    for (int i = 1; i <=5; i++) {
        for (int j = 1; j<i; j++) {
            cout << " ";
        }
        for (int k=1; k<=5-i;k++) {
           cout << "*";
        }
      cout << "\n";
    }
}

int main() {
    int choice;

    cout << "Choose  pattern : ";
    cin >> choice;

    switch (choice) {
        case 1:
            P1();
            break;
        case 2:
            P2();
            break;
        case 3:
            P3();
            break;
        case 4:
            P4();
            break;
        default:
            cout << "Invalid choice. " <<endl;
    }

    return 0;
}
