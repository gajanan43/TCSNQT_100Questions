#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool perfect(int n){
    int sum=0;
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            sum=i+sum;
        }
    }
    if(n==sum){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cin>>n;

    bool ans=perfect(n);
    if(ans&1){
        cout<<"Given number is a perfect square"<<endl;
    }
    else{
        cout<<"Given number is not perfect square"<<endl;
    }
    
    return 0;
}