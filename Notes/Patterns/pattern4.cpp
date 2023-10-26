#include<bits/stdc++.h>
using namespace std;
void pattern(){
    int n;
    cout<<"Enter rows: ";
    cin>>n;

    // for (int i =0;i<=n;i++) {
    //     for (int j = 0; j<=n-i;j++) {
    //         cout << " ";
    //     }
    //     for (int k=0;k<=i;k++) {
    //        cout << "*";
    //     }
    //     cout << "\n";
    // }
    //  for (int i=0;i<=n; i++) {
    //     for (int j=0;j<=i;j++) {
    //         cout << " ";
    //     }
    //     for (int k=0;k<=n-i;k++) {
    //        cout << "*";
    //     }
    //   cout << "\n";


    
for(int i=1;i<n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";    
             }
             cout<<"\n";
             }
    for (int i= n;i>0; i--) {
        for (int j=1; j <=i; j++) {
               cout<<"*";
        }
        cout <<"\n"; 
    }        
}

int main(){
    pattern();
return 0;
}