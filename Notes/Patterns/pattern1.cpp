#include<bits/stdc++.h>
using namespace std;

//w/o r  w/o p
void pattern(){
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= i; j++) {
            cout << " ";
        }
        for(int k=1;k<i;k++){
            cout<<"*";
        }
        cout << "\n";
    }
}
int main(){
    pattern();
    
return 0;
}


//w/o r  w p

// void pattern(int n){
//      for(int i=0;i<5;i++){
//         for(int j=0;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
    
// }
// int main(){
//     int n;
//     pattern(n);
//     return 0;
// }


