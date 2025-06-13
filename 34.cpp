#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// void sumOfNatural(int n){
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         sum=sum+i;
//     }
//     cout<<"Sum of n natural number is "<<sum<<endl;
// }

void sumOfNatural(int n){
    int sum=(n*(n+1))/2;
    cout<<"Sum of n natural number is "<<sum<<endl;
}

int main(){
    int n;
    cin>>n;

    sumOfNatural(n);
    return 0;
}