//palindrome

#include<bits/stdc++.h>
using namespace std;

void palindrome()
{
  cout<<"Enter a number :";
  int num;
  cin>>num;
  int rev =0 ;
  int stored = num;
  
  while(num>0)
 {
    int temp=0;
    temp = num%10;
    rev = rev*10 + temp;
    num/=10;
}
 if(rev == stored)
 {
  cout<<"Is a palindrome"<<endl;
 }
 else cout<<"Is not a palindrome"<<endl;
}
int main()
{
    palindrome();
    return 0;
}