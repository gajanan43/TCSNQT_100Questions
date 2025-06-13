#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void countFrequency(vector<int>&vt,int n){
    map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[vt[i]]++;
    }
    for(auto x:mp){
        cout<<x.first<<" "<<x.second<<endl;
    }
}

int main(){
    int n;
    cin>>n;

    vector<int>vt(n);
    for(int i=0;i<n;i++){
        cin>>vt[i];
    }

    countFrequency(vt,n);

    return 0;
}