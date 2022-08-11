#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    //cout << "Enter n: ";
    cin >> n;
    cin.ignore();

    char arr[n];
    //cout << "Enter array: ";
    // To get a sentence as an input, we use cin.getline
    cin.getline(arr, n);
    cin.ignore();
    int currLen = 0, ans = 0;
    int st = 0, maxst = 0;
    for (int i = 0; i < n + 1; i++)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (currLen > ans)
            {
                ans = currLen;
                maxst = st;
            }
            st = i + 1;
            currLen = 0;
        }
        else
        {
            currLen++;
        }
    }
    cout << ans << endl;
    int i = maxst;
    while (arr[i] != '\0')
    {
        cout << arr[i];
        i++;
    }
    return 0;
}