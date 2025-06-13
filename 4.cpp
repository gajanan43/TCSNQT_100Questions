#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void arrayReverse(int arr[],int n){
    //array reverse using stack
    stack<int>st;
    for(int i=0;i<n;i++){
        st.push(arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<st.top()<<" ";
        st.pop();
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    arrayReverse(arr,n);
    return 0;
}