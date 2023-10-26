 //Input any character and check whether it is the alphabet, digit or special character.
 #include<bits/stdc++.h>
 using namespace std;

 void character()
{
    char c;
    cout<<"Enter a character: ";
    cin>>c;
     if((c >= 65 && c <= 90) || (c >= 97 && c <= 122) )
        cout << c << " is an Alphabet.";
    
    else if (c >=48 && c <= 57)
    {
        cout << c << " is a Digit."<<endl;
    }
    
    else {
        cout<<c<< " is a special character"<<endl;
    }
        
    }

 int main(){
    character();
    
 return 0;
 }