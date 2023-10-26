//Convert All Input String Simultaneously Into Asterisk  in cpp
#include<bits/stdc++.h>
using namespace std;
void asterisk() {
    string s;
    cout << "Enter a string: ";
   getline(cin,s);

    for (int i = 0; i <s.length(); i++) {
        s[i] = '*';
    }
    cout << "Converted string: " <<s<< endl;
}
 int main(){

 asterisk();
    return 0;
}