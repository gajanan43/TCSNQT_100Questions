#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Using for loop
// void sumAllElement(int arr[],int n){
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum=sum+arr[i];
//     }

//     cout<<"Sum of All element is "<<sum<<endl;
// }

//usig formula;
void sumAllElement(int arr[],int n){
    int sum=(n*(n+1))/2;

    cout<<"Sum of All element is "<<sum<<endl;
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }

    sumAllElement(arr,n);

    return 0;
}