#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void sortString(string str){
    sort(str.begin(),str.end());
    cout<<str<<endl;
}

int main(){
    string str;
    cin>>str;

    sortString(str);

    return 0;
}