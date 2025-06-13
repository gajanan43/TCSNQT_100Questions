#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void replaceElementRank(vector<int> &v, int n)
{
    vector<int> vt = v;         // Copy the vector
    sort(vt.begin(), vt.end()); // Sort to get the ranking order

    unordered_map<int, int> rank;
    int r = 1;

    for (int i = 0; i < n; i++)
    {
        // Assign rank only if it's not already assigned (handle duplicates)
        if (rank.find(vt[i]) == rank.end())
        {
            rank[vt[i]] = r++;
        }
    }

    // Replace elements in the original vector with their rank
    for (int i = 0; i < n; i++)
    {
        cout << rank[v[i]] << " ";
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    replaceElementRank(v, n);
}