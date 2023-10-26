//Count the total number of even and odd elements in an array
#include<bits/stdc++.h>
using namespace std;
void even_odd(){
    int n;
    cout<<"Enter the number of elements u want in the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<< n <<"elements for the array:"<<endl;
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int even=0;
    int odd=0;
    for(int i=0;i<n;i++){
        if (arr[i]%2==0){
            even++;
        } else {
            odd++;
        }
    }
    cout<<"Total even elements: "<<even<<endl;
    cout<<"Total odd elements: "<<odd<<endl;
}
int main(){
even_odd();
    return 0;
}
