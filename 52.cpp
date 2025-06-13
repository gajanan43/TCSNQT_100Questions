#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

void abundant(int n){
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(sum>n){
        cout<<"Given number is abundant number"<<endl;
    }
    else{
        cout<<"Given number is not a number"<<endl;
    }
}

int main(){

    int n;
    cin>>n;

    abundant(n);

    return 0;
}