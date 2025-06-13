#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void sumDigit(int n){
    int sum=0;
    
    while(n>0){
        int ele=n%10;
        sum=sum+ele;
        n=n/10;
    }
    cout<<"Sum of the given number digit is "<<sum<<endl;
}

int main(){

    int n;
    cin>>n;

    sumDigit(n);

    return 0;
}