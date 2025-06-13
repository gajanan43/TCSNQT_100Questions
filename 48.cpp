#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void automorphic(int n){
    int sum=n*n;
    while (n>0)
    {
        int ele=n%10;
        int abc=sum%10;

        if(ele!=abc){
            cout<<"Number is not a automorphic number"<<endl;
            return;
        }
        n=n/10;
        sum=sum/10;
    }
    cout<<"Number is a automorphic number"<<endl;
    
}

int main(){

    int n;
    cin>>n;

    automorphic(n);

    return 0;
}