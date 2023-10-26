#include<bits/stdc++.h>
using namespace std;

int product(int num){
    int prod=1;
    int temp;
    while(num>0)
    {
    temp=num%10;
    
    num/=10;
    prod*=temp;
    }
}
int main()
   {
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"product is: "<<product(n)<<endl;

   }
