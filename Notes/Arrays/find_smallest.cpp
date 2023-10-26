//find smallest element in the array
#include<bits/stdc++.h>
using namespace std;
int smallest(int arr[],int n){
    int smallest=100000;
    for (int i=0;i<n;i++){
        if(smallest>arr[i]){
            smallest=arr[i];
        }
    }
    return smallest;
}
int main(){
  int size;
 
  cout<<"Enter the size of the array.";    int n;
    
    cin>>n;
    int arr[n];
    
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
 cout<<"the smallest number is: "<<smallest(arr,n)<<endl;
return 0;
}