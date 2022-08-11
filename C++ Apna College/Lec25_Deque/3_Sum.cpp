#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int a[n];
    cout << "Enter array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int target;
    cout << "Enter target: ";
    cin >> target;

    bool found = false;
    int ans[3];
    sort(a, a + n);

    for (int i = 0; i < n; i++)
    {
        int low = i + 1;
        int high = n - 1;
        while (low < high)
        {
            int curr = a[i] + a[low] + a[high];

            if (curr == target)
            {
                found = true;
                ans[0] = a[i];
                ans[1] = a[low];
                ans[2] = a[high];
            }
            if (curr < target)
            {
                low++;
            }
            else
            {
                high--;
            }
        }
    }
    if (found)
    {
        cout << "True" << endl;
        cout << ans[0] << ", " << ans[1] << ", " << ans[2] << endl;
    }
    else
    {
        cout << "False" << endl;
    }

    return 0;
}