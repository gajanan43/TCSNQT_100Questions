#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void positiveORnegative(int n){
    if(n>0){
        cout<<"Number is a positive number"<<endl;
    }
    else{
        cout<<"Number is a negative number"<<endl;
    }
}

int main(){

    int n;
    cin>>n;

    positiveORnegative(n);
    
    return 0;
}
