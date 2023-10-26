#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
cout<<"Enter size of array: ";
    //take size
    cin>>n; 
    //declare
    int arr[n];
    //input
    cout<<"Enter value: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //perform action and print output
          for (int i = 0; i <n; i++) {
        cout<<"\n"<< arr[i]+5<<endl;
    }
  return 0;
}