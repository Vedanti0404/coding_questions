/**
 * 
 * size = 0;
 * push_back(n) -> [56][45][34][45][78][200][300][100][][][][][][][][][][]
*/
#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int> v;
    int n=3;
    cout<<"insert the elements in the vector: ";
    for(int i=0;i<n;i++){
            cout<<v.size()<<endl;
            cout<<v.capacity()<<endl;
            int num;
            cin>>num;
            v.push_back(num);

    }
    for(int i=0;i<v.size();i++){
            
            cout<<v[i]<<" ";
    }
    cout<<endl;
    v.pop_back();
    for(int i=0;i<v.size();i++){
            
            cout<<v[i]<<" ";
    }
cout<<endl;
    sort(v.begin(),v.end());

cout<<endl;
for(int i=0;i<v.size();i++){
            
            cout<<v[i]<<" ";
    }
    reverse(v.begin(),v.end());
cout<<endl;
for(int i=0;i<v.size();i++){
            
            cout<<v[i]<<" ";
    }

for(int i=v.size()-1;i>=0;i--){
    cout<<v.at(i)<<" ";
}
    
return 0;
}