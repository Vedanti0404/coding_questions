#include<bits/stdc++.h>
using namespace std;


void pattern() {
    int n ;
    cout<<"Enter rows: ";
    cin>>n;
    for (int i = 0; i < n; i++) {
       for (int j = 0; j < i; j++) {
           cout << " ";
        }
        for (int k = 0; k < n - i; k++) {
            cout << "*";
        }
       cout <<"\n";
    }

} 
int main(){
    pattern();
    return 0;
}