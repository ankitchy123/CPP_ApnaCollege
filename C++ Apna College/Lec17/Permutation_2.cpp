#include <bits/stdc++.h>
using namespace std;

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
    vector<vector<int>> ans;

    do
    {
        ans.push_back(a);
    } while (next_permutation(a.begin(), a.end()));
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

// 1 2 3 => 2 1 3,      3 2 1
//          3 1 2     //2 3 1
//          1 3 2
