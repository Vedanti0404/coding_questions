#include<bits/stdc++.h>
using namespace std;

void alpha()
{
    char c;
    cout<<"Enter a character: ";
    cin>>c;
     if((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) {
        cout << c << " is an Alphabet.";
    } else {
        cout << c << " is not an Alphabet.";
    }
}
    
    int main(){
    alpha();
   
return 0;
}