#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void check(int arr[4][6],int m,int n){
    int count=0;
    int ans=0;
    for(int i=0;i<4;i++){
        count=1;
        for(int j=0;j<6;j++){
            if(arr[0][i]==arr[1][j]){
                count++;
            }
            if(arr[0][i]==arr[2][j]){
                count++;
            }
            if(arr[0][i]==arr[3][j]){
                count++;
            }
        }
        if(count==4){
            cout<<arr[0][i]<<endl;
        }
        count=0;
    }
}

int main(){
    const int m=4,n=6;

    int arr[m][n]={{2,7,3,5,4,6},{1,2,3,8,4,9},{8,7,2,3,5,1},{1,2,5,4,3,8}};

    check(arr,m,n);

    return 0;
}