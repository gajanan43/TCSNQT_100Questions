#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void removeBracket(string str){
    string ans="";

    for(int i=0;i<str.length();i++){
        if(str[i]!='(' && str[i]!=')'){
            ans=ans+str[i];
        }
    }
    cout<<ans;
}

int main(){
    string str;
    getline(cin,str);

    removeBracket(str);

    return 0;
}