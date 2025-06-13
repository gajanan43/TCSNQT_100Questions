#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// void AP(int n,int a,int d){
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         sum=sum+a;
//         a=a+d;
//     }
//     cout<<"Sum of given series is "<<sum<<endl;
// }

void AP(int n,int a,int d){
    int sum=(n*(2*a+(n-1)*d))/2;
    cout<<"Sum of given series is "<<sum<<endl;
}

int main(){
    int n,a,d;
    cout<<"Enter numbers in a series"<<endl;
    cin>>n;

    cout<<"Enter first number in a series"<<endl;
    cin>>a;

    cout<<"Enter difference in between any two numbers"<<endl;
    cin>>d;

    AP(n,a,d);

    return 0;
}