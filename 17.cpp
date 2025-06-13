#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void maxiProductSubArray(vector<int>&vt,int n){
    int result=INT_MIN;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int prod=1;
            for(int k=i;k<=j;k++){
                prod=vt[k]*prod;
                result=max(prod,result);
            }
        }
    }
    cout<<result;
}

int main(){
    int n;
    cin>>n;

    vector<int>vt(n);
    for(int i=0;i<n;i++){
        cin>>vt[i];
    }

    maxiProductSubArray(vt,n);

    return 0;
}