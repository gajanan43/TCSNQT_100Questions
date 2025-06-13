#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void removeDuplicate(vector<int>&vt,int n){
    vector<int>ans;
    ans.push_back(vt[0]);

    for(int i=1;i<n;i++){
        if(vt[i]!=vt[i-1]){
            ans.push_back(vt[i]);
        }
    }
    
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;

    vector<int>vt(n);
    for(int i=0;i<n;i++){
        cin>>vt[i];
    }

    removeDuplicate(vt,n);

    return 0;
}