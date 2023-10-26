#include<bits/stdc++.h>
using namespace std;
int reverse(int n){
   
    int rev=0;
   while(n > 0) 
   {
    int temp;
    temp = n % 10;
    rev = rev * 10 + temp;
    n /= 10;
  }
  return rev;
} 
int main(){
    int no;
    cout<<"Enter a number to be reversed: ";
    cin>>no;
    cout<<"The number after reversing is: "<<reverse(no)<<endl;

return 0;
}