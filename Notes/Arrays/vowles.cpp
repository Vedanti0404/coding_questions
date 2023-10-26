//create an array of character and print the indexes of the characters which are vowels
#include<bits/stdc++.h>
using namespace std;
void vowel(){
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    char c[n];
    cout<<"Enter the character: "<<endl;
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    for(int i=0;i<n;i++){
        char ch = c[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
               cout << "Index " << i << ": " << c[i] <<endl;
        }
        
    }
    
 }
int main(){
   vowel();
return 0;
}

