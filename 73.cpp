#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// void palindrome(string s){
//     string ans="";

//     for(int i=s.length()-1;i>=0;i--){
//         ans=ans+s[i];
//     }
//     if(ans==s){
//         cout<<"Given string is palindrome"<<endl;
//     }
//     else{
//         cout<<"Given string is not palindrome"<<endl;
//     }
// }

// void palindrome(string s){
//     int i=0;
//     int e=s.length()-1;

//     while(i<e){
//         if(s[i++]!=s[e--]){
//             cout<<"Given string is not palindrome"<<endl;
//             return;
//         }
//     }
//     cout<<"Given string is palindrome"<<endl;
// }

bool palindrome(int i,string &s){
    //Base condition
    if(i>=s.length()/2){
        return true;
    }

    //check left and right part 
    if(s[i]!=s[s.length()-i-1]){
        return false;
    }

    return palindrome(i+1,s);
}

int main(){
    string s;
    cin>>s;
    // palindrome(s);
    bool ans=palindrome(0,s);

    if(ans&1){
        cout<<"Given string is a palindrome"<<endl;
    }
    else{
        cout<<"Given string is not a palindrome"<<endl;
    }

    return 0;
}