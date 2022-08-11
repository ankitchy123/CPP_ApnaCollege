#include <bits/stdc++.h>
using namespace std;

int kadane(int a[], int n)
{
    int currSum = 0;
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currSum += a[i];
        if (currSum < 0)
        {
            currSum = 0;
        }
        maxSum = max(maxSum, currSum);
    }
    return maxSum;
}
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
    int wrapsum;
    int nonwrapsum;
    nonwrapsum = kadane(a, n);
    // Max SubArray sum = Total sum of array - Sum of non contributing elements
    int totalsum = 0;
    for (int i = 0; i < n; i++)
    {
        totalsum += a[i];
        a[i] = -a[i];
    }
    wrapsum = totalsum + kadane(a, n);

    cout << max(wrapsum, nonwrapsum) << endl;
    return 0;
}