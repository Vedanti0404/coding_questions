#include<bits/stdc++.h>
using namespace std;
void pattern(){
    int n;
    cout<<"Enter rows: ";
    cin>>n;
for (int i =1;i<=n;i++){
    
  for (int j = 1; j<=n-i+1;j++) {
            cout << " ";
        }
        for (int k=1;k<=i;k++){
           cout << "*";
        }
        for (int L=1;L<=i;L++){
           cout << "*";
        }
        cout << "\n";
       }
       for (int i = 1; i <=n; i++) {
        
          for (int j = 1; j<=i; j++) {
             cout << " ";
        }
          for (int k=1; k<=n-i+1;k++) {
           cout << "*";
        }
        for(int L=1;L<=n-i+1;L++){
            cout<<"*";
        }
        cout << "\n";
         }
 }

int main(){
    pattern();
return 0;
}