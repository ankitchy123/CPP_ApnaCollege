#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cout << "Enter n & k: ";
    cin >> n >> k;

    vector<int> a(n);
    cout << "Enter array: ";
    for (auto &i : a)
    {
        cin >> i;
    }

    int zerocnt = 0, i = 0, ans = 0;
    for (int j = 0; j < n; j++)
    {
        if (a[j] == 0)
        {
            zerocnt++;
        }

        while (zerocnt > k)
        {
            if (a[i] == 0)
            {
                zerocnt--;
            }
            i++;
        }
        // zerocnt <= k
        ans = max(ans, j - i + 1);
    }
    cout << ans;
    return 0;
}