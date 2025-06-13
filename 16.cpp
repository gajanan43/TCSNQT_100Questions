#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void symmetric(int arr[][2],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j][0]==arr[i][1] && arr[j][1]==arr[i][0]){
                cout<<"("<<arr[i][0]<<","<<arr[i][1]<<")"<<" ";
            }
        }
    }
}

int main(){

    int n=5;
 
    int arr[][2] = {{1, 2}, {2, 1}, {3, 4}, {4, 5}, {5, 4}};
    symmetric(arr,n);

    return 0;
}