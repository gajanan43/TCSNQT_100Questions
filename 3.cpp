#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void SecondSammlestALargest(vector<int> arr, int n)
{
    int smallest = INT_MAX, secondSmallest = INT_MAX;
    int largest = INT_MIN, secondLargest = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        //Second smallest number
        if (arr[i] < smallest)
        {
            secondSmallest=smallest;
            smallest=arr[i];
        }
        else if(arr[i]<secondSmallest && arr[i]!=smallest){
            secondSmallest=arr[i];
        }

        //Secong Largest 
        if (arr[i] >largest)
        {
            secondLargest=largest;
            largest=arr[i];
        }
        else if(arr[i]> secondLargest && arr[i]!=largest){
            secondLargest=arr[i];
        }
    }
    cout<<"Second smallest number is "<<secondSmallest<<" Second Largest number is "<<secondLargest<<endl;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    SecondSammlestALargest(arr, n);

    return 0;
}