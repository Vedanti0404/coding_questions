#include <bits/stdc++.h>
using namespace std;

void pattern(){
    int n;
    cout << "Enter n: ";
    cin >> n;
for (int i=1;i<=n;i++) {
       for(int j=1;j<=i;j++) {
           cout << "*";
        }
          for (int k = 1; k<=2*(n-i); k++) {
            cout << " ";
        }
        for (int j=1;j<=i;j++) { 
            cout <<"*";
        }
       cout<<"\n";
    }       
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
           cout << "*";
        }
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
       cout << endl;
    }

       
    }

int main(){

pattern();
    return 0;
}
