#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool prime(int n){
    if(n==1){
        return false;
    }
    
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int min,max;
    cout<<"Enter a minimum number"<<endl;
    cin>>min;

    cout<<"Enter a maximum number"<<endl;
    cin>>max;

    for(int i=min;i<=max;i++){

        if(prime(i)){
            cout<<i<<" ";
        }
    }

    return 0;
}