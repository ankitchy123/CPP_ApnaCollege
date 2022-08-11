#include <bits/stdc++.h>
using namespace std;

int firstocc(int arr[], int n, int x, int i)
{
    if (i == n)
    {
        return -1;
    }

    if (arr[i] == x)
    {
        return i;
    }
    return firstocc(arr, n, x, i + 1);
}
int lastocc(int arr[], int n, int x, int i)
{
    if (i == n)
    {
        return -1;
    }
    int restArray = lastocc(arr, n, x, i + 1);
    if (restArray != -1)
    {
        return restArray;
    }
    if (arr[i] == x)
    {
        return i;
    }
    return -1;
}
int main()
{
    int arr[7] = {4, 2, 1, 2, 5, 2, 7};
    int x;
    cout << "Enter key: ";
    cin >> x;
    cout << firstocc(arr, 7, x, 0) << " " << lastocc(arr, 7, x, 0);
    return 0;
}