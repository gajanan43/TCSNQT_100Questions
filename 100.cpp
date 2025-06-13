#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// void reverseWordInString(string str){
//     stack<string>st;
//     string ans="";

//     for(int i=0;i<str.length();i++){
//        if(str[i]==' '){
//             if(!ans.empty()){
//                 st.push(ans);
//                 ans="";
//             }
//        }
//        else{
//         ans=ans+str[i];
//        }
//     }

//     if(!ans.empty()){
//         st.push(ans);
//     }

//     while(!st.empty()){
//         string abc=st.top();
//         cout<<abc<<" ";
//         st.pop();
//     }
// }

void reverseSubstring(string &str,int start,int end){
    while(start<end){
        swap(str[start++],str[end--]);
    }
}

void reverseWordInString(string str){
    //reverse the entire string 
    reverseSubstring(str,0,str.length()-1);

    //reverse each word in the reversed string 
    int start=0;
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            reverseSubstring(str,start,i-1);
            start=i+1;
        }
    }

    reverseSubstring(str, start, str.length() - 1);

    cout<<str<<endl;
}

int main(){
    string str;
    getline(cin,str);

    reverseWordInString(str);

    return 0;
}