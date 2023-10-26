#include<bits/stdc++.h>
using namespace std;
void sortstr(string str){
    sort(str.begin(), str.end());
    cout << str;
}
void revstr(string str){
     reverse(str.begin(),str.end());
cout<<endl;
for(int i=0;i<str.size();i++){
    cout<<str[i];
    }
}

int main()
{
    string s;
    cout<<"Enter string: ";
    cin>>s;
    cout<<"The sorted string is: "<<endl;
    cout<<"Reverse of string is: "<<endl;
    sortstr(s);
    revstr(s);
    return 0;
}

