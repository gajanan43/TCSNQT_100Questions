#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// void largestThree(float a,float b,float c){
//     if((a>b) && (a>c)){
//         cout<<"Greater element is "<<a<<endl;
//     }
//     else if((b>c)&& (b>a)){
//         cout<<"Greater element is "<<b<<endl;
//     }
//     else{
//         cout<<"Greater element is "<<c<<endl;
//     }
// }

void largestThree(float a,float b,float c){
    float maxi,ans;
    maxi=max(a,b);
    ans=max(maxi,c);
    cout<<"Largest element is "<<ans<<endl;
    
}

int main(){

    float a,b,c;
    cout<<"Enter a three element "<<endl;
    cin>>a>>b>>c;

    largestThree(a,b,c);

    return 0;
}