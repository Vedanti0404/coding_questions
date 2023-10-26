#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter a string "<<endl;
    string s;
    cin>>s;
    string rev ="";

    int n = s.size();
    for(int i=n-1;i>=0;i--){
        rev += s[i];
    }
    cout<<rev<<endl;


    //second method.
    for(int i = 0;i<n/2;i++){
        swap(s[i],s[n-1-i]);
    }
    cout<<s<<endl;
return 0;
}