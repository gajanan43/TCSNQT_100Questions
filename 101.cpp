#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void sumOfTwo(int arr[],int n){
    int totalsum=0;
    for(int i=0;i<n;i++){
        totalsum=totalsum+arr[i];
        // cout<<totalsum<<endl;
    }
    int ans=0;
    int check=0;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            ans=arr[i]+arr[j];
            check=totalsum-ans;
            if(ans==check){
                cout<<arr[i]<<" "<<arr[j]<<endl;
            }
            else{
                ans=0;
            }
        }
    }
}

int main(){
    int  n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sumOfTwo(arr,n);
}