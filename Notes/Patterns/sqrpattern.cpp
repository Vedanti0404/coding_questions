#include<bits/stdc++.h>
using namespace std;
void sqr( int n ){
   for( int i = 1; i <= n; i++ ) 
   {
      for( int j = 1; j <= n; j++ ) 
      {
         cout << "* ";
      }
      cout << endl;
   }
}
int main(){
   int n;
   cout << "Enter size: ";
   cin>>n;
   sqr( n );
return 0;
}