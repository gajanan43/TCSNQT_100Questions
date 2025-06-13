#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// void GP(float a,float r,float n){
//     float sum=0;
//     for(int i=0;i<n;i++){
//         sum=sum+a;
//         a=a*r;
//     }
//     cout<<"Sum Given series is "<<sum<<endl;
// }

void GP(float a,float r,float n){
    float sum=(a*(pow(r,n)-1))/(r-1);
    cout<<"Sum Given series is "<<sum<<endl;
}

int main(){

    float a,r,n;
    cout<<"Enter a first element of in GP"<<endl;
    cin>>a;

    cout<<"Enter a ratio of series in a GP"<<endl;
    cin>>r;

    cout<<"Enter a n elements of series in GP"<<endl;
    cin>>n;

    GP(a,r,n);

    return 0;
}