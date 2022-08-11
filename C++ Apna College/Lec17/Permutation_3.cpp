// Given a collection of numbers that might contain duplicates, return all possible unique permutations in any order

#include <bits/stdc++.h>
using namespace std;
void helper(vector<int> a, vector<vector<int>> &ans, int ind)
{
    if (ind == a.size())
    {
        ans.push_back(a);
        return;
    }
    for (int i = ind; i < a.size(); i++)
    {
        if (i != ind && a[i] == a[ind])
        {
            continue;
        }

        swap(a[i], a[ind]);
        helper(a, ans, ind + 1);
    }
}
vector<vector<int>> permute(vector<int> num)
{
    sort(num.begin(), num.end());
    vector<vector<int>> ans;
    helper(num, ans, 0);
    return ans;
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

    vector<vector<int>> res = permute(a);
    for (auto v : res)
    {
        for (auto i : v)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}