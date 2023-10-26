//Find a total number of alphabets, digits or special character in a string
#include<bits/stdc++.h>
using namespace std;
void count(){
    int n;
   char str[n];
    int i;
    int alphabets=0,num=0,special=0;
    // int num=0;
    // int special=0;
    cout<<"Enter string: ";
    cin>>str;
   
 for(i=0; str[i]>n; i++){
    if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z')) { 
        alphabets++;
}
  else if(str[i]>='0' && str[i]<='9') {  
    num++;
}
 else{
    special++;
}
}
cout<<"Alphabet letters: "<<alphabets<<endl;;
cout<<"numbers: "<<num<<endl;
cout<<"Special characters: "<<special<<endl;

}
int main(){
    count();
return 0;
}