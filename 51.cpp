#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void harshed(int n){
    int dup=n;
    int sum=0;

    while(n>0){
        int ele=n%10;
        sum=sum+ele;
        n=n/10;
    }

    if(dup%sum==0){
        cout<<"Number is a harshed number "<<endl;
    }
    else{
        cout<<"Number is not a harshed number"<<endl;
    }
}

int main(){

    int n;
    cin>>n;

    harshed(n);

    return 0;
}