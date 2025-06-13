#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void concatTwoString(string str1,string str2){
    cout<<str1+str2<<endl;
    cout<<str1.append(str2)<<endl;
}


int main(){
    string str1,str2;
    cin>>str1>>str2;

    concatTwoString(str1,str2);

    return 0;
}