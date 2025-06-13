#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void decimalToOctal(int n){
    int sum=0;
    int i=0;
    while(n>0){
        int ele=n%10;
        sum=sum+(ele*pow(8,i));
        n=n/10;
        i++;
    }
    cout<<"Conversion of decimal to octal is "<<sum<<endl;
}

int main(){
    int n;
    cin>>n;

    decimalToOctal(n);

    return 0;
}