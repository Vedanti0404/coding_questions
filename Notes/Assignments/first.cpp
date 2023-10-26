#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n =10;
    int fact =1;
    for(int i=n;i>=1;i--){
        fact = fact * i;
    }
    cout<<"the factorial is :"<<fact<<endl;
return 0;
}