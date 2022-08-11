// Given an array of distint integers, return all the possible permutation. You can return the answer in any order
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;

void permute(vector<int> &a, int ind)
{
    if (ind == a.size())
    {
        ans.push_back(a);
        return;
    }
    for (int i = ind; i < a.size(); i++)
    {
        swap(a[i], a[ind]);
        permute(a, ind + 1);
        swap(a[i], a[ind]);
    }
}
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    vector<int> a(n);
    cout << "Enter array of size " << n << " : ";
    for (auto &i : a)
    {
        cin >> i;
    }
    permute(a, 0);
    for (auto v : ans)
    {
        for (auto i : v)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}