#include <iostream>
#include <vector>
using namespace std;

bool isvalid(vector<int> arr, int n, int m, int maxAllocatedPage)
{
    int stu = 1, pages = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxAllocatedPage)
        {
            return false;
        }
        if (pages + arr[i] <= maxAllocatedPage)
        {
            pages += arr[i];
        }
        else
        {
            stu++;
            pages = arr[i];
        }
    }
    return stu <= m;
}

int allocateBooks(vector<int> &arr, int n, int m)
{
    int ans = -1;
    int sum = 0;
    if (m > n)
    {
        return -1;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
    }

    int st = 0, end = sum;
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
    vector<int> arr = {2, 1, 3, 4};
    int n = 4, m = 2;
    cout << allocateBooks(arr, 4, 2);
    return 0;
}