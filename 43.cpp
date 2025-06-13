#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// void fact(int n){
//     if(n==0){
//         cout<<1;
//         return;
//     }
    
//     int sum=1;
//     for(int i=n;i>0;i--){
//         sum=sum*i;
//     }
//     cout<<sum;
// }

int fact(int n){
    if(n<=1){
        return 1;
    }
    return n*fact(n-1);
}

int main(){

    int n;
    cin>>n;

    cout<<fact(n);

    return 0;
}