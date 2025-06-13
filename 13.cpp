#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void insertAtStart(vector<int>&vt,int n,int element){
    for(int i=n;i>=1;i--){
        vt[i]=vt[i-1];
    }
    vt[0]=element;

}

void insertAtEnd(vector<int>&vt,int n,int element){
    vt[n]=element;
    
}

void insertAtPosition(vector<int>&vt,int n,int element,int posi){
    for(int i=n;i>posi;i--){
        vt[i]=vt[i-1];
    }
    vt[posi]=element;
}

int main(){
    int n;
    cin>>n;

    vector<int>vt(n);
    for(int i=0;i<n;i++){
        cin>>vt[i];
    }


    // insertAtStart(vt,n,7);
    // insertAtEnd(vt,n,7);
    insertAtPosition(vt,n,7,3);

    for(int i=0;i<=vt.size();i++){
        cout<<vt[i]<<" ";
    }

    return 0;
}