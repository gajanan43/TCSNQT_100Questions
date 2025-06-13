#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void smallestN(vector<int>arr,int n){
    int small=INT_MAX;
    for(int i=0;i<n;i++){
        if(small>arr[i]){
            small=arr[i];
        }
    }
    cout<<small<<endl;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    smallestN(arr,n);
    return 0;
}