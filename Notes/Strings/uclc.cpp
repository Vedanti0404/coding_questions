// Check whether a character is an uppercase or lowercase alphabet.

#include<bits/stdc++.h>
using namespace std;

void alpha(char c){
    if(c >= 65 && c <= 90) 
    {
        cout << c << " is in UPPERCASE."<<endl;
    } 
    else if(c >= 97 && c <= 122)
    {
         cout << c << " is in lowercase."<<endl;
    }
    else{
        cout<<"neither a lowercase nor UPPERCASE"<<endl;
    }
}
int main()
{
    char c;
    cout<<"Enter a character: ";
    cin>>c;
    alpha(c);
   
return 0;
}