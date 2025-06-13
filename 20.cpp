#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//using extra space 
// void rotateRight(int arr[],int n,int k){
//     vector<int>vt;
//     for(int i=n-k;i<n;i++){
//         vt.push_back(arr[i]);
//     }
//     for(int i=0;i<n-k;i++){
//         vt.push_back(arr[i]);
//     }
//     for(int i=0;i<vt.size();i++){
//         cout<<vt[i]<<" ";
//     }
// }

void rotateRight(int arr[],int n,int k){
    k=k%n;
    while(k--){
        int last=arr[n-1];
        for(int i=n-1;i>=0;i--){
            arr[i]=arr[i-1];
        }
        arr[0]=last;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n,k;
    cin>>n>>k;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    rotateRight(arr,n,k);
    return 0;
}