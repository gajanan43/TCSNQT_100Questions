#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Using sorting
//  void removeDuplicate(int arr[], int n)
//  {
//      sort(arr,arr+n);

//     int j=0;
//     for(int i=0;i<n;i++){
//         if(i==0 || arr[i]!=arr[i-1]){
//             arr[j++]=arr[i];
//         }
//     }
//     for(int i=0;i<j;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// using set
void removeDuplicate(int arr[], int n)
{
    set<int> st;

    for (int i = 0; i < n; i++)
    {
        if (st.find(arr[i]) == st.end())
        {
            cout<<arr[i]<<" ";
            st.insert(arr[i]);
        }
    }
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    removeDuplicate(arr, n);

    return 0;
}