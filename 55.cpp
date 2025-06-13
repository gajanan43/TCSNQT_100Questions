#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

// void permutation(int n,int r){
//     int ans=1;
//     for(int i=n;i>n-r;i--){
//         ans=ans*i;
//     }
//     cout<<"Permutation is "<<ans<<endl;
// }

int fact(int n){
    if(n==0 || n==1){
        return 1;
    }

    return n*fact(n-1);
}

void permutation(int n,int r){
    int num=fact(n);
    int den=fact(n-r);

    int ans=num/den;
    cout<<"Permutation is "<<ans<<endl;
}

int main(){

    int n,r;
    cin>>n>>r;

    permutation(n,r);

    return 0;
}