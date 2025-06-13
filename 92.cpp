#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void changeCharacterWithNextCharacter(string str){
    for(int i=0;i<str.length();i++){
        int ascii=(int)(str[i]);

        if(ascii>=65 && ascii<90){
            str[i]=((char)(ascii+1));
        }
        else if(ascii>=97 && ascii<122){
            str[i]=((char)(ascii+1));
        }
        else if(ascii==90){
            str[i]=((char)(ascii-25));
        }
        else if(ascii==122){
            str[i]=((char)(ascii-25));
        }
    }
    cout<<str<<endl;
}

int main(){
    string str;
    cin>>str;

    changeCharacterWithNextCharacter(str);
    
    return 0;
}