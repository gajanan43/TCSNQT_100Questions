#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void median(int arr[],int n){
    sort(arr,arr+n);
    if(n%2==0){
        int index1=(n/2)-1;
        int index2=(n/2);

        double val=(arr[index1]+arr[index2])/2.0;
        cout<<"Median of a given array is "<<val<<endl;
    }
    else{
        cout<<"Median of a given array is "<<arr[n/2]<<endl;
    }
}

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    median(arr,n);
    
    return 0;
}