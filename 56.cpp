#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void twoFraction(int a,int b,int c,int d){
    float num=((a*d)+(b*c));
    float den=(b*d);

    cout<<"Answer of two fraction number is "<<num<<"/"<<den<<endl;
}

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    twoFraction(a,b,c,d);

    return 0;
}