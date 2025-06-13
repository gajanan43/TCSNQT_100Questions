#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int factor(int n){
    if(n==0 || n==1){
        return 1;
    }

    return n*factor(n-1);
}

void strong(int n ){
    int sum=0;
    int dup=n;

    while(n>0){
        int ele=n%10;
        sum=sum+factor(ele);
        n=n/10;
    }

    if(sum==dup){
        cout<<"Number is a strong number"<<endl;
    }
    else{
        cout<<"Number is not strong number"<<endl;
    }
}

int main(){

    int n;
    cin>>n;

    strong(n);

    return 0;
}