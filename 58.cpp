#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

// void sumOfTwoPrime(int n)
// {
//     bool found = false;
//     for (int i = 2; i <= n / 2; i++)
//     {
//         if (isPrime(i) && isPrime(n - i))
//         {
//             cout << n << " can be expressed as the sum of " << i << " and " << n - i << endl;
//             found = true;
//             break; 
//         }
//     }
//     if (!found)
//     {
//         cout << n << " cannot be expressed as the sum of two prime numbers" << endl;
//     }
// }

void sumOfTwoPrime(int n){
    vector<int>vt;
    for(int i=2;i<n;i++){
        if(isPrime(i)){
            vt.push_back(i);
        }
    }
    int s=0;
    int e=vt.size()-1;

    bool flag=false;

    while (s<=e)
    {
        int sum=vt[e]+vt[s];
        if(sum==n){
            cout << n << " can be expressed as the sum of " << vt[s] << " and " << vt[e] << endl;
            flag=true;
            break;
        }
        s++;
        e--;
    }
    
    if(!flag){
        cout << n << " cannot be expressed as the sum of two prime numbers" << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    sumOfTwoPrime(n);

    return 0;
}