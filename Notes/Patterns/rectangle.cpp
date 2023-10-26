#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,m;
   cout<<"Enter length: ";
   cin>>n;
   cout<<"Enter breadth: ";
   cin>>m;
   for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        cout<<"*";
    }
    cout<<"\n";
   }
return 0;
}