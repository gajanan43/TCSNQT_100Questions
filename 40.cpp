#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reverseNumber(int n){
    int rev=0;
    
    while(n>0){
        int ele=n%10;
        rev=(rev*10)+ele;
        n=n/10;
    }
    cout<<"Reverse number is "<<rev<<endl;
    
}

int main(){

    int n;
    cin>>n;

    reverseNumber(n);

    return 0;
}