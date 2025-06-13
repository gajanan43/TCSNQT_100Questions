#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// bool checkAnagram(string str1,string str2){
//     if(str1.length()!=str2.length()){
//         return false;
//     }

//     map<char,int>mp1;
//     map<char,int>mp2;

//     for(char c:str1){
//         mp1[c]++;
//     }

//     for(char c:str2){
//         mp2[c]++;
//     }

//     return mp1==mp2;
// }

bool checkAnagram(string str1,string str2){
    if(str1.length()!=str2.length()){
        return false;
    }

    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());

    for(int i=0;i<str1.length();i++){
        if(str1[i]!=str2[i]){
            return false;
        }
    }
    return true;
}

int main(){
    string str1,str2;
    cin>>str1>>str2;

    bool ans=checkAnagram(str1,str2);
    if(ans&1){
        cout<<"Two string are an anagram"<<endl;
    }
    else{
        cout<<"Two string are not an anagram"<<endl;
    }
    
    return 0;
}