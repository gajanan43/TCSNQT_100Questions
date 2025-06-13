#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void removeVowel(string str){
    string ans="";

    for(int i=0;i<str.length();i++){
        str[i]=tolower(str[i]);
    }

    for(int i=0;i<str.length();i++){
        if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u'){
            ans=ans+str[i];
        }
    }
    cout<<ans<<endl;

}

int main(){
    string s="take u forward";

    removeVowel(s);

    return 0;
}