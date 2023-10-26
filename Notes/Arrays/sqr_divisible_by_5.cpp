//print square od numbers which are divisible by 5
#include<bits/stdc++.h>
using namespace std;

void sqr(){
    int n;
    cout<<"Enter a number of element: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the numbers "<<i+1<<" :";
        cin>>arr[i];
    }
       for(int i=0;i<n;i++){
        if(arr[i]%5==0){
            cout<<"SQuare of the numbers divisible by 5: "<<pow(arr[i],2)<<endl;
        }
    }
}
int main(){
    sqr();
return 0;
}