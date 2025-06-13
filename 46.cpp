#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool prime(int n){
    if(n<2){
        return false;
    }

    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

void primeFactor(int n){
    for(int i = 2; i <= sqrt(n); i++){
        while(n % i == 0){
            cout << i << " ";
            n /= i;
        }
    }
    if(n>1){
        cout << n << " ";
    }
}

int main(){
    int n;
    cin>>n;

    primeFactor(n);

    return 0;
}