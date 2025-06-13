#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

void leap(int n){
    if((n%4==0) && (n%100!=0) || (n%400==0)){
        cout<<n<<" is a leap year"<<endl;
    }
    else{
        cout<<n<<" is not a leap year"<<endl;
    }
}

int main(){

    int n;
    cin>>n;

    leap(n);

    return 0;
}