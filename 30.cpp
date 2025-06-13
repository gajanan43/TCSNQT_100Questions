#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool armstrongNum(int n){
    int sum=0;
    int dup=n;
    while(n>0){
        int ele=n%10;
        sum=ele*ele*ele+sum;
        n=n/10;
    }
    if(dup==sum){
        return true;
    }
    else{
        return false;
    }
}

int main(){

    int n;
    cin>>n;

    bool ans=armstrongNum(n);
    if(ans&1){
        cout<<"Given number is a Armstong number"<<endl;
    }
    else{
        cout<<"Give numer is not a Armstrong number"<<endl;
    }

    return 0;
}