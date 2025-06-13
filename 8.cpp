#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// //using for Loop(extra space)
// void blockSwap(int arr[],int n,int k){
//     vector<int>vt;
//     for(int i=k;i<n;i++){
//         vt.push_back(arr[i]);
//     }
//     for(int i=0;i<k;i++){
//         vt.push_back(arr[i]);
//     }

//     for(int i=0;i<n;i++){
//         cout<<vt[i]<<" ";
//     }
// }

//Using for
void blockSwap(int arr[],int n,int k){
    for(int i=0;i<k;i++){
        int element=arr[0];
        for(int i=0;i<n-1;i++){
            arr[i]=arr[i+1];
        }
        arr[n-1]=element;
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

    blockSwap(arr,n,k);
   

    return 0;
}