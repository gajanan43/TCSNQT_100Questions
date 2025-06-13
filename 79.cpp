#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// void reverseString(string str){
//     string ans="";
//     for(int i=str.length()-1;i>=0;i--){
//         ans=ans+str[i];
//     }

//     cout<<ans<<endl;
// }

// void reverseString(string str){
//     reverse(str.begin(),str.end());
//     cout<<str<<endl;
// }

void reverseString(string str){
    stack<int>st;

    for(int i=0;i<str.length();i++){
        st.push(str[i]);
    }
    while (!st.empty())
    {
        char ch=st.top();
        cout<<ch;
        st.pop();
    }
    
}

int main(){
    string str;
    getline(cin,str);

    reverseString(str);

    return 0;
}