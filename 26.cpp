#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//approach 1:using extra space
//Time complexity:o(n)
//Space complexity:O(m)

// bool palindrome(int n){
//     vector<int>vt;
//     while(n!=0){
//         int element=n%10;
//         vt.push_back(element);
//         n=n/10;
//     }
//     int i=0;
//     int j=vt.size()-1;
//     while (i<=j)
//     {
//         if(vt[i]!=vt[j]){
//            return false;
//         }
//         i++;
//         j--;
//     }
//     return true;
// }

//approach:optimal 
bool palindrome(int n){
    int revNum=0;
    int dup=n;

    while(n>0){
        int ele=n%10;
        revNum=(revNum*10)+ele;

        n=n/10;
    }
    if(dup==revNum){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cin>>n;

    bool ans=palindrome(n);

    if(ans&1){
        cout<<"Number is a palindrome"<<endl;
    }
    else{
        cout<<"Number is not a palindrome"<<endl;
    }

    return 0;
}