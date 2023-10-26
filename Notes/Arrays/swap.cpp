#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"enter 2 numbers: "<<endl;
    int a;
    cin>>a;
    int b;
    cin>>b;

    int temp=0;
    cout<<"the numbers before swapping are: "<<a<<" "<<b<<endl;
    temp = a;
    a =b;
    b =temp;
    cout<<"the numbers after swapping are: "<<a<<" "<<b<<endl;
    a = a + b; // a = 2 + 4 = 6
    b = a - b; // b = 6 - 4 = 2
    a = a - b; // a = 6 - 2 = 4
    cout<<"the numbers after swapping are: "<<a<<" "<<b<<endl;
    swap(a,b);
    
    cout<<"the numbers after swapping are: "<<a<<" "<<b<<endl;


return 0;
}