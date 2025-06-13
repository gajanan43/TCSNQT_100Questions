#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void countWordInString(string str){
    int count=1;
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            count++;
        }
    }
    cout<<count<<endl;
}

int main(){
    string str;
    getline(cin,str);

    countWordInString(str);

    return 0;
}