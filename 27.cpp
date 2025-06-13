#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//Time complexity:O(N) & space complexity:O(1)
bool palindrome(int n){
    int revNum=0;
    int dup=n;

    while(n>0){
        int ele=n%10;
        revNum=(revNum*10)+ele;

        n=n/10;
    }
    if(revNum==dup){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int min,max;
    cout<<"Enter a minimum number"<<endl;
    cin>>min;

    cout<<"Enter a maximum number"<<endl;
    cin>>max;

    for(int i=min;i<=max;i++){
        if(palindrome(i)){
            cout<<i<<" ";
        }
    }
    

    return 0;
}