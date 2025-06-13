#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void firstAndLastCapitalWord(string str){
    if(str.empty()){
        return;
    }

    for(int i=0;i<str.length();i++){
        
        str[0]=toupper(str[0]);
        
        if(str[i]==' '){
            str[i-1]=toupper(str[i-1]);
            str[i+1]=toupper(str[i+1]);
        }
    }
    str[str.length()-1]=toupper(str[str.length()-1]);
    cout<<str<<endl;
}

int main(){
    string str;
    getline(cin,str);

    firstAndLastCapitalWord(str);

    return 0;
}