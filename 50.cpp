#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void LCD(int a,int b){
    int gcd;
    for(int i=1;i<=min(a,b);i++){
        if(b%i==0 && a%i==0){
            gcd=i;
        }
    }
    int lcm=(a*b)/gcd;
    cout<<"LCM of the given number is "<<lcm<<endl;
}

int main(){

    int a,b;
    cin>>a>>b;

    LCD(a,b);

    return 0;
}