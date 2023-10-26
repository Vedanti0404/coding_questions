//Check String Is Palindrome Or Not Using For Loop
#include<bits/stdc++.h>
using namespace std;
void palindrome(){
    int n;
    string s[n];
    cout<<"Enter string: ";
    cin>>s[n];
    for(int i=0;i<n;i++){
        if (s[i] != s[n - 1 - i]){
            cout<<"not palindrome"<<endl;
        }
        else{
            cout<<"palindrome"<<endl;
        }
    }
}
int main(){
   palindrome();
return 0;
}
