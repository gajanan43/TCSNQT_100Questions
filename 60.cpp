#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void quadraticRoot(int a,int b,int c){
    double d = b * b - 4.0 * a * c; // Use double for precision
    if (d > 0) {
        double root1 = (-b + sqrt(d)) / (2.0 * a);
        double root2 = (-b - sqrt(d)) / (2.0 * a);
        cout << "Root 1: " << root1 << endl;
        cout << "Root 2: " << root2 << endl;
    } else if (d == 0) {
        double root = -b / (2.0 * a);
        cout << "Repeated root: " << root << endl;
    } else {
        double realPart = -b / (2.0 * a);
        double imaginaryPart = sqrt(-d) / (2.0 * a);
        cout << "Complex root 1: " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Complex root 2: " << realPart << " - " << imaginaryPart << "i" << endl;
    }
}

int main(){
    int a,b,c;
    cout<<"Enter a values of the a b & c"<<endl;
    cin>>a>>b>>c;

    quadraticRoot(a,b,c);

    return 0;
}