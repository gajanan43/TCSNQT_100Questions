#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// void removeDuplicate(string str){
//     map<char,int>mp;

//     for(char c:str){
//         mp[c]++;
//     }
//     for(auto i:mp){
//         cout<<i.first;
//     }
// }

void removeDuplicate(string str){
    sort(str.begin(),str.end());

    for(int i=0;i<str.length();i++){
        if(str[i]!=str[i+1]){
            cout<<str[i];
        }
    }
}

int main(){
    string str;
    cin>>str;

    removeDuplicate(str);

    return 0;
}