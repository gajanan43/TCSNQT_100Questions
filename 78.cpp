#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void removeOther(string str){
    string ans="";
    for(int i=0;i<str.length()-1;i++){
        char ch=tolower(str[i]);

        if(ch>='a' && ch<='z'){
            ans=ans+ch;
        }
    }
    cout<<ans<<endl;
}

int main(){
    string str;
    getline(cin,str);

    removeOther(str);

    return 0;
}