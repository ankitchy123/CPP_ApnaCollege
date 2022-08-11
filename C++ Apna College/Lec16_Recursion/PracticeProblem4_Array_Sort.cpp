// Check if an array is sorted or not

#include <bits/stdc++.h>
using namespace std;

bool isSort(int arr[], int n)
{
    if (n == 1)
    {
        return 1;
    }

    bool restArray = isSort(arr + 1, n - 1);
    return (arr[0] < arr[1] && restArray);
}
int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int a[n];
    cout << "Enter array of size " << n << ": ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << isSort(a, n);
    return 0;
}