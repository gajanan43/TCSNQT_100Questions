#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// void duplicateCharacter(string str){
//     map<char,int>mp;

//     for(char c:str){
//         mp[c]++;
//     }
//     for(auto i:mp){
//         if(i.second>1){
//             cout<<i.first<<"->"<<i.second<<endl;
//         }
//     }
// }

void duplicateCharacter(string str){
    int freq[26]={0};

    for(int i=0;i<str.length();i++){
        freq[str[i]-'a']++;
    }

    for(int i=0;i<26;i++){
        if(freq[i]>1){
            cout<<(char)(i+'a')<<"->"<<freq[i]<<endl;
        }
    }
}

int main(){
    string str;
    cin>>str;

    duplicateCharacter(str);

    return 0;
}