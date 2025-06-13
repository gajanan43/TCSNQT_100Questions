#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void largest(float a,float r){
    if(a>r){
        cout<<a<<" first number is greater than second "<<r<<endl;
    }
    else{
        cout<<r<<" Second number is greater than first "<<a<<endl;
    }
}

int main(){

    float a,r;
    cout<<"Enter a first number & second number"<<endl;
    cin>>a>>r;

    largest(a,r);

    return 0;
}