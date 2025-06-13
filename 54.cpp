#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void sumRange(int a,int b){
    int sum=0;
    for(int i=a;i<=b;i++){
        sum=sum+i;
    }
    cout<<"Sum of given rage is "<<sum<<endl;
}

int main(){

    int a,b;
    cin>>a>>b;

    sumRange(a,b);

    return 0;
}
