#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// void frequencyCount(string str){
//     map<char,int>mp;
//     for(int i=0;i<str.length();i++){
//         mp[str[i]]++;
//     }
//     for(auto i:mp){
//         cout<<i.first<<i.second<<" ";
//     }
// }

void frequencyCount(string str){
    int arr[26]={0};

    for(int i=0;i<str.length();i++){
        arr[str[i]-'a']++;
    }

    for(int i=0;i<26;i++){
        if(arr[i]!=0){
            cout<<(char)(i+'a')<<arr[i]<<" ";
        }
    }
}

int main(){
    string str;
    getline(cin,str);

    frequencyCount(str);

    return 0;
}