//Get the second largest element in an array.
#include<bits/stdc++.h>
using namespace std;
int sec_largest(int arr[],int n){
    int largest=0;
    int second_largest=0;
    for (int i=0;i<n;i++){
        if(largest>arr[i]){
            largest=arr[i];
        }
        if(second_largest>largest ){
            second_largest=largest;

        }
    }
    return second_largest;


}
int main(){
  int size;
 
  cout<<"Enter the size of the array: ";   
   int n;
   cin>>n;
   int arr[n];
   cout<<"Enter the elements of the array: ";
   for(int i=0;i<n;i++){
    cin>>arr[i];
    }
 cout<<"the second largest number is: "<<sec_largest(arr,n)<<endl;
return 0;
}