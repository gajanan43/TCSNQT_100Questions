#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

void GCD(int a,int b){
    int maxi=INT_MIN;
    
    for(int i=1;i<=a;i++){
        if(a%i==0 && b%i==0){
            maxi=max(maxi,i);
        }
    }
    cout<<"Gcd of the given two numbers is "<<maxi<<endl;
}

int main(){

    int a,b;
    cin>>a>>b;

    GCD(a,b);

    return 0;
}