#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// void maximumCharacter(string str){
//     map<char,int>mp;

//     for(char c:str){
//         mp[c]++;
//     }

//     int max=INT_MIN;
//     for(auto i:mp){
//         if(i.second>max){
//             max=i.second;
//         }
//     }
//     for(auto i:mp){
//         if(max==i.second){
//             cout<<"Maximum character is "<<i.first<<endl;
//         }
//     } 
// }

void maximumCharacter(string str){
    int freq[26]={0};
    int count=0;
    char ch;

    for(int i=0;i<str.length();i++){
        freq[str[i]-'a']++;

        if(freq[str[i]-'a']>count){
            count=freq[str[i]-'a'];
            ch=str[i];
        }
    }
    cout<<ch<<endl;
}

int main(){
    string str;
    cin>>str;

    maximumCharacter(str);
    return 0;
}