#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isValid(vector<int> arr, int n, int m, int minDistance)
{
    int cows = 1;
    int lastStall = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] - lastStall >= minDistance)
        {
            cows++;
            lastStall = arr[i];
        }
        if (cows == m)
        {
            return true;
        }
    }
    return false;
}

int getDistance(vector<int> arr, int n, int m)
{
    sort(arr.begin(), arr.end());
    int end = arr[n - 1] - arr[0];
    int st = arr[0];
    int ans = 0;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (isValid(arr, n, m, mid))
        {
            ans = mid;
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int n = 5, m = 3;
    vector<int> arr = {1, 2, 8, 4, 9};
    cout << getDistance(arr, n, m) << endl;
    return 0;
}