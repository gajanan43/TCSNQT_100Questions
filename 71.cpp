#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int s,int e){
    int pivot=arr[s];

    int cnt=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<pivot){
            cnt++;
        }
    }

    //place pivot to the right position
    int pivotIndex=cnt+s;
    swap(arr[pivotIndex],arr[s]);

    //left and right part condition
    int i=s,j=e;

    while(i<pivotIndex && j>pivotIndex){
        while (arr[i]<arr[pivotIndex])
        {
            i++;
        }
        while(arr[j]>arr[pivotIndex]){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }
        
    }

    return pivotIndex;
}

void quickSort(int arr[],int s,int e){
    //Base condition
    if(s>=e){
        return ;
    }

    //partition
    int p=partition(arr,s,e);

    //solve left part
    quickSort(arr,s,p-1);

    //solve right par
    quickSort(arr,p+1,e);
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    quickSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

    return 0;
}