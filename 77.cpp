#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void removeSpace(string str){
    string ans="";
    for(int i=0;i<str.length()-1;i++){
        char ch=tolower(str[i]);
        if(ch!=' '){
            ans=ans+ch;
        }
    }
    cout<<ans<<endl;
}

int main(){
    string str;
    getline(cin,str);

    removeSpace(str);

    return 0;
}