#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// void factors(int n){
//     for(int i=1;i<=n;i++){
//         if(n%i==0){
//             cout<<i<<" ";
//         }
//     }
// }

void factors(int n){
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            if(n/i==i){
                cout<<i<<" ";
            }
            else{
                cout<<i<<" "<<n/i<<" ";
            }
        }
    }
}

int main(){

    int n;
    cin>>n;

    factors(n);

    return 0;
}