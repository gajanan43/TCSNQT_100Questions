#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void largestAndSmallestDigit(int n){
    int mini=INT_MAX;
    int maxi=INT_MIN;

    while(n>0){
        int element=n%10;
        mini=min(mini,element);
        maxi=max(maxi,element);
        n=n/10;
    }
    cout<<mini<<" is a minimum element in a digit and maximum is "<<maxi<<endl;
}

int main(){

    int n;
    cin>>n;

    largestAndSmallestDigit(n);

    return 0;
}