#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void power(int a,int b){
    if(b<0){
        return ;
    }
    
    int sum=1;
    for(int i=1;i<=b;i++){
        sum=sum*a;
    }
    cout<<sum;
}

int main(){

    int a,b;
    cin>>a>>b;

    power(a,b);

    return 0;
}