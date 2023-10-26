#include<bits/stdc++.h>
using namespace std;

void pattern(int n)
{
     for(int i=n;i<=n-1;i++)
     {
        for(int j=n-1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=n-1;k++){
        cout<<"*";
    }
    cout<<"\n";
     }
}
int main(){
    int n;
    cout<<"Enter rows: ";
    cin>>n;
    pattern(n);
    return 0;
 }