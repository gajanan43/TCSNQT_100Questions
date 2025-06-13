#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//approach 1:
//Time complexity:O(N) & space complexity:O(1)
// bool prime(int n){
//     for(int i=2;i<n-1;i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }

//Approach 2:
//Time complexity:O(N/2) & Space complexity:O(1)
bool prime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;

    bool ans=prime(n);
    if(ans&1){
        cout<<"Number is a prime number"<<endl;
    }
    else{
        cout<<"Number is not a prime number"<<endl;
    }

    return 0;
}