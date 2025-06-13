#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Using for loop
// void average(vector<int>&vt,int n){
//     double sum=0;
//     for(int i=0;i<n;i++){
//         sum=sum+vt[i];
//     }

//     double val=sum/n;
//     cout<<"Average of all the element is "<<val<<endl;
// }

//Using Formula
void average(vector<int>&vt,int n){

    double val=(vt[0]+vt[n-1])/2.0;
    cout<<"Average of all the element is "<<val<<endl;
}


int main(){

    int n;
    cin>>n;

    vector<int>vt(n);
    for(int i=0;i<n;i++){
        cin>>vt[i];
    }

    average(vt,n);
    return 0;
}