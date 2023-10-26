#include<bits/stdc++.h>
using namespace std;
//w/o r  w/o p
void pattern(){
    int n;

    cout << "Enter number of rows: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n-i; j++) {
            cout << "*";
        
        }
        cout << "\n";
    }
}
int main(){
    pattern();
    
return 0;
}

