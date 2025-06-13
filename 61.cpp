#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void binaryToDecimal(int n){
    int sum=0;
    int i=0;
    while(n>0){
        int ele=n%10;
        if(ele==1){
            sum=sum+pow(2,i);
        }
        i++;
        n=n/10;
    }
    cout<<sum;
}

int main(){

    int n;
    cin>>n;

    binaryToDecimal(n);

    return 0;
}