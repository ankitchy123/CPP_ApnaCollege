#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int a[n];
    cout << "Enter array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // 2 4 7 11 14 16 20 21
    // 31
    int k;
    cout << "Enter k: ";
    cin >> k;
    bool ans = false;
    if (a[n - 2] + a[n - 1] < k)
    {
        ans = false;
    }
    else
    {
        int low = 0;
        int high = n - 1;
        while (low < high)
        {
            if (a[low] + a[high] == k)
            {
                cout << low << " " << high << endl;
                ans = true;
                break;
            }
            else if (a[low] + a[high] < k)
            {
                low++;
            }
            else if (a[low] + a[high] > k)
            {
                high--;
            }
        }
    }
    cout << ans << endl;
    return 0;
}