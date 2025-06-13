#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Bubble sort
// void bubbleSort(int arr[],int n){
//     for(int i=1;i<n;i++){
//         for(int j=0;j<n-i;j++){
//             if(arr[j]>arr[j+1]){
//                 int temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }


//Selection sort
// void selectionSort(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         int minIndex=i;
//         
//         for(int j=i+1;j<n;j++){
//             if(arr[minIndex]>arr[j]){
//                 minIndex=j;
//             }
//         }
//         swap(arr[i],arr[minIndex]);
//     }

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// void insertionSort(int arr[],int n){
//    for(int i=1;i<n;i++){
//     int temp=arr[i];
//     int j=i-1;
//         for(;j>=0;j--){
//             if(temp<arr[j]){
//                 arr[j+1]=arr[j];
//             }
//             else{
//                 break;
//             }
//         }
//         arr[j+1]=temp;
//    }

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

//quick Sort
// int partition(int arr[],int s,int e){
//     int pivot=arr[s];
//     int cnt=0;

//     for(int i=s+1;i<=e;i++){
//         if(arr[i]<pivot){
//             cnt++;
//         }
//     }

//     int pivotIndex=cnt+s;
//     swap(arr[s],arr[pivotIndex]);

//     //left and right part condition
//     int i=s;
//     int j=e;
//     while(i<pivotIndex && j>pivotIndex){
//         while (arr[i]<arr[pivotIndex])
//         {
//             i++;
//         }
//         while (arr[j]>arr[pivotIndex])
//         {
//             j--;
//         }
//         if(i<pivotIndex && j>pivotIndex){
//             swap(arr[i++],arr[j--]);
//         }
        
//     }

//     return pivotIndex;
// }

// void quickSort(int arr[],int s,int e){
//     //Base condition
//     if(s>=e){
//         return;
//     }

//     //partition
//     int p=partition(arr,s,e);

//     //left part
//     quickSort(arr,s,p-1);

//     //right part
//     quickSort(arr,p+1,e);
// }

//merge Sort
void mergeSort(int arr[],int s,int e){
    if(s>=e){
        return;
    }

    //find mid
    int mid=(s+e)/2;

    //left part
    mergeSort(arr,s,mid);

    //right part
    mergeSort(arr,mid+1,e);

    //merge all element 
    inplace_merge(arr+s,arr+mid+1,arr+e+1);

}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // bubbleSort(arr,n);
    // selectionSort(arr,n);
    // insertionSort(arr,n);
    // quickSort(arr,0,n-1);
    mergeSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}