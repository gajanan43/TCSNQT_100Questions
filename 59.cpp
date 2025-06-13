#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void area(int r){
    float ans=3.14*r*r;
    cout<<"Area of the circle is "<<ans<<endl;
}

int main(){
    float r;
    cout<<"Enter a radius of circle"<<endl;
    cin>>r;

    area(r);

    return 0;
}