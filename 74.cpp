#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void countVowelConsonentSpace(string s){
    int vowel=0;
    int consonent=0;
    int space=0;
    
    for (int i = 0; i < s.length(); i++){
        s[i] = towlower(s[i]);
    }

    for(int i=0;i<s.length();i++){
        if((s[i]=='a') || (s[i]=='e') || (s[i]=='i') ||(s[i]=='o') || (s[i]=='u')){
            vowel++;
        }
        else if(s[i]>='a' && s[i]<='z'){
            consonent++;
        }
        else if(s[i]==' '){
            space++;
        }
    }
    cout<<"Vowel "<<vowel<<" Consonents "<<consonent<<" Space "<<space<<endl;
}

int main(){
    string s="Take u forward is Awesome";

    countVowelConsonentSpace(s);

    return 0;
}