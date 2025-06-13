#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void sumInString(string str){
    int sum=0;
    string ans="";

    for(int i=0;i<str.length();i++){
        if(str[i]>='0' && str[i]<='9'){
            ans=ans+str[i];
        }
        else{
            if(!ans.empty()){
                sum=sum+stoi(ans);
                ans="";
            }
        }
    }
    if(!ans.empty()){
        sum=sum+stoi(ans);
    }
    cout<<sum;
}

int main(){
    string str;
    getline(cin,str);

    sumInString(str);    

    return 0;
}
