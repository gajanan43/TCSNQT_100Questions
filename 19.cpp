#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void frequencySortElement(vector<int>vt,int n){
    map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[vt[i]]++;
    }
    for(auto i:mp){
        cout<<i.first<<" ";
    }
}

int main(){
    int n;
    cin>>n;

    vector<int>vt(n);
    for(int i=0;i<n;i++){
        cin>>vt[i];
    }

    frequencySortElement(vt,n);
    return 0;
}