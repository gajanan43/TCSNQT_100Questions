#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>vt,int n){
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(vt[j]>vt[j+1]){
                int temp=vt[j];
                vt[j]=vt[j+1];
                vt[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<vt[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    vector<int>vt(n);

    for(int i=0;i<n;i++){
        cin>>vt[i];
    }

    bubbleSort(vt,n);

    return 0;
}