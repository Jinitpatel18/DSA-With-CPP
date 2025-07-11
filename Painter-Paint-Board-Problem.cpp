#include <iostream>
#include <vector>
using namespace std;

bool isvalid(int arr[], int n, int m, int maxAllocated)
{
    int painter = 1;
    int time = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxAllocated)
        {
            return false;
        }
        if (time + arr[i] <= maxAllocated)
        {
            time += arr[i];
        }
        else
        {
            painter++;
            time = arr[i];
        }
    }
    return painter <= m;
}

int boardAllocation(int arr[], int n, int m)
{
    int sum = 0;
    int maxArr = arr[0];
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    for (int i = 0; i < n - 2; i++)
    {
        maxArr = max(maxArr, arr[i]);
    }
    int st = maxArr;
    int end = sum;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (isvalid(arr, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int arr[] = {40, 30, 10, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int m = 2;
    cout << boardAllocation(arr, n, m) << endl;
    return 0;
}