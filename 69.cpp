#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int miniIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[miniIndex]){
                miniIndex=j;
            }
        }
        swap(arr[miniIndex],arr[i]);
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    selectionSort(arr,n);

    return 0;
}