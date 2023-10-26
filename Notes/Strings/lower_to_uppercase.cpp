//Convert lowercase string to uppercase 
#include<bits/stdc++.h>
using namespace std;
void lowercase(string str){
for(int i=0;str[i]>0;i++){
    if (str[i] >= 97 && str[i] <= 122) {
			str[i] = str[i] - 32; 
    }  
}
cout<<"String in upper case: "<< str<<endl;
}
int main(){
   string str;
   cout<<"Enter string: ";
   getline(cin,str);
   lowercase(str);
return 0;
}