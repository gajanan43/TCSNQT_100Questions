#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// void nonRepeatingCharacter(string str){
//     map<char,int>mp;
    
//     for(int i=0;i<str.length();i++){
//         mp[str[i]]++;
//     }

//     for(auto i:mp){
//         if(i.second<2){
//             cout<<i.first<<",";
//         }
//     }
// }

void nonRepeatingCharacter(string str){
    int freq[26]={0};

    for(int i=0;i<str.length();i++){
        freq[str[i]-'a']++;
    }

    for(int i=0;i<26;i++){
        if(freq[i]==1){
            cout<<(char)(i+'a')<<",";
        }
    }
}

int main(){
    string str;
    getline(cin,str);

    nonRepeatingCharacter(str);

    return 0;
}