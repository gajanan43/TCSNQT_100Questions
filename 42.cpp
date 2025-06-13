#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// void fibonacci(int n){
//     if(n==0){
//         cout<<0;
//     }
//     else{
//         int secondLast=0;
//         int last=1;
//         cout<<0<<" "<<1<<" ";
//         int curr;

//         for(int i=2;i<n;i++){
//             curr=secondLast+last;
//             secondLast=last;
//             last=curr;
//             cout<<curr<<" ";
//         }
//     }
// }

int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    
    int ans=fib(n-1) + fib(n-2); 
    return ans;
}

int main(){

    int n;
    cin>>n;

    for (int i = 0; i < n; ++i) {
        cout << fib(i) << " ";
    }

    return 0;
}