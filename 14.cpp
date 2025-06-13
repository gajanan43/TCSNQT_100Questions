#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Using map
// void repeatedElement(vector<int>&vt,int n){
//     map<int,int>mp;
//     for(int i=0;i<n;i++){
//         mp[vt[i]]++;
//     }
//     for(auto i:mp){
//         if(i.second>1){
//             cout<<i.first<<" ";
//         }
        
//     }
// }

void repeatedElement(vector<int>&vt,int n){
    sort(vt.begin(),vt.end());

    int count=1;
    for(int i=0;i<n-1;i++){
        if(vt[i]==vt[i+1]){
            count++;
        }
        else{
            if(count>=2){
                cout<<vt[i]<<" ";
            }
            count=1;
        }
    }
}

int main(){
    int n;
    cin>>n;

    vector<int>vt(n);
    for(int i=0;i<n;i++){
        cin>>vt[i];
    }
    
    repeatedElement(vt,n);

    return 0;
}