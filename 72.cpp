#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void mergearray(vector<int>&vt,int s,int e){
    int mid=(s+e)/2;

    int len1=mid-s+1;
    int len2=e-mid;

    int *first=new int[len1];
    int *second=new int[len2];

    int mainArrayIndex=s;

    for(int i=0;i<len1;i++){
        first[i]=vt[mainArrayIndex++];
    }

    mainArrayIndex=mid+1;
    for(int i=0;i<len2;i++){
        second[i]=vt[mainArrayIndex++];
    }

    int index1=0;
    int index2=0;
    mainArrayIndex=s;

    while(index1< len1 && index2<len2){
        if(first[index1]<second[index2]){
            vt[mainArrayIndex++]=first[index1++];
        }
        else{
            vt[mainArrayIndex++]=second[index2++];
        }
    }
    while (index1< len1)
    {
        vt[mainArrayIndex++]=first[index1++];
    }

    while (index2<len2)
    {
        vt[mainArrayIndex++]=second[index2++];
    }

    delete[] first;
    delete[] second;
}

void mergeSort(vector<int>&vt,int s,int e){
    if(s>=e){
        return;
    }

    //mid 
    int mid=(s+e)/2;

    //left part sort karna he 
    mergeSort(vt,s,mid);

    //right part sort karna he 
    mergeSort(vt,mid+1,e);

    //merge 
    // inplace_merge(vt.begin()+s,vt.begin()+mid,vt.begin()+e);
    mergearray(vt,s,e);
}

int main(){
    int n;
    cin>>n;
    vector<int>vt(n);

    for(int i=0;i<n;i++){
        cin>>vt[i];
    }

    mergeSort(vt,0,n-1);

    for(int i=0;i<n;i++){
        cout<<vt[i];
    }

    return 0;
}