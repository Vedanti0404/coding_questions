#include<bits/stdc++.h>
using namespace std;
int sum(int power,int n)
{
    int sum=0;
    int temp;
    int p=int(pow(n,power));
   while(n>0)
   {
      temp = n%10;
      sum+=temp;
      p/=10;
   }
return sum;

}
int main()
{
    int n ,power;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"Enter power ";
    cin>>power;
    cout<<"Sum is: "<<sum(n,power)<<endl;
}