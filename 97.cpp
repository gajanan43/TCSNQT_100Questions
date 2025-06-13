#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// void changeCase(string str){
//     for(int i=0;i<str.length();i++){
//         if(islower(str[i])){
//             str[i]=toupper(str[i]);
//         }
//         else {
//             str[i]=tolower(str[i]);
//         }
//     }
//     cout<<str<<endl;
// }

void changeCase(string str){
    for(int i=0;i<str.length();i++){
        int ascii=(int)str[i];

        if(ascii>=65 && ascii<=90){
            str[i]=((char)(ascii+32));
        }
        else if(ascii>=97 && ascii<=122){
            str[i]=((char)(ascii-32));
        }
    }
    cout<<str<<endl;
}

int main(){
    string str;
    cin>>str;

    changeCase(str);

    return 0;
}