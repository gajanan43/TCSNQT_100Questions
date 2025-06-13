#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// void nonRepeatedElement(int arr[],int n){
//     sort(arr,arr+n);

//     if(n==1 || arr[0]!=arr[1]){
//         cout<<arr[0]<<" ";
//     }

//     for(int i=1;i<n-1;i++){
//         if(arr[i-1]!=arr[i] && arr[i]!=arr[i+1]){
//             cout<<arr[i]<<" ";
//         }  
//     }
//     if(arr[n-2]!=arr[n-1]){
//         cout<<arr[n-1]<<" ";
//     }
// }

void nonRepeatedElement(int arr[],int n){
    map<int,int>mp;

    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    for(auto i:mp){
        if(i.second<2){
            cout<<i.first<<" ";
        }
    }
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    nonRepeatedElement(arr,n);

    return 0;
}