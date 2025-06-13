#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// void replaceZeroWithOne(int n){
//     stack<int>st;
//     while(n>0){
//         int ele=n%10;
//         if(ele==0){
//             ele=1;
//         }
//         st.push(ele);
//         n=n/10;
//     }
//     while (!st.empty())
//     {
//         int ele=st.top();
//         cout<<ele;
//         st.pop();
//     }
    
// }

void replaceZeroWithOne(int n){
    int ans=0,temp=1;
    while(n>0){
        int d=n%10;
        if(d==0){
            d=1;
        }
        ans=temp*d+ans;
        temp=temp*10;
        n=n/10;
    }
    cout<<"Replace all the 0's with 1's in a given integer "<<ans<<endl;
}

int main(){

    int n;
    cin>>n;

    replaceZeroWithOne(n);

    return 0;
}