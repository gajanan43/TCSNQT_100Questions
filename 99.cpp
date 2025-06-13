#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void findPositionSubstringInString(string str1,string str2){
    for(int i=0;i<str1.length();i++){
        int temp=i;
        int j=0;
        for(;j<str2.length();j++){
            if(str1[temp]!=str2[j]){
                break;
            }
            temp++;
        }
        if(j==str2.length()){
            cout<<i;
        }
    }
}

int main(){
    string str1,str2;
    cin>>str1>>str2;

    findPositionSubstringInString(str1,str2);

    return 0;
}