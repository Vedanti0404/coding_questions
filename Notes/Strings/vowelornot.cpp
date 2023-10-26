#include<bits/stdc++.h>
using namespace std;
//Input any alphabet and check whether it is vowel or consonant.
void alpha(char c){
   if (c == 'a' || c == 'e' || c == 'i' ||c == 'o' || c == 'u' || c == 'A' ||c == 'E' || c == 'I' || c == 'O' || c == 'U')
   {
        cout <<c<< " is a Vowel" << endl;
    }
else
{
cout <<c<< " is a Consonant" << endl;
}
}

int main()
{
    char c;
    cout<<"Enter a character: ";
    cin>>c;
    alpha(c);
//return 0;
}