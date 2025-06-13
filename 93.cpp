#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void largestWordString(string str){
    int count=0;
    string ans="";
    string abc="";
    int maxi=INT_MIN;

    for(int i=0;i<str.length();i++){
        if(str[i]!=' '){
            ans=ans+str[i];
            count++;
        }
        else{
            
            if(count>maxi){
                maxi=max(count,maxi);
                abc=ans;
            }
            count=0;
            ans="";
        }
    }
    cout<<abc<<endl;
}

int main(){
    string str;
    getline(cin,str);

    largestWordString(str);

    return 0;
}