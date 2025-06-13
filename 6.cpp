#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void ascendingOrder(vector<int>&vt,int n){
    sort(vt.begin(),vt.end());
    for(int i=0;i<n/2;i++){
        cout<<vt[i]<<" ";
    }
    for(int i=n-1;i>=n/2;i--){
        cout<<vt[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;

    vector<int>vt(n);
    for(int i=0;i<n;i++){
        cin>>vt[i];
    }

    ascendingOrder(vt,n);

    return 0;
}