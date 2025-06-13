#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void EvenOrOdd(int n){
    if(n%2==0){
        cout<<"Given number is a even number"<<endl;
    }
    else{
        cout<<"Given number is odd number"<<endl;
    }
}

int main(){
    int n;
    cin>>n;

    EvenOrOdd(n);

    return 0;
}