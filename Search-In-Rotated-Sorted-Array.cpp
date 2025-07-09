#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 5, 7, 9};
    int n = sizeof(arr) / sizeof(int) - 1;
    int tar = 9;
    int mid, index = -1;
    int st = 0;
    int end = sizeof(arr) / sizeof(arr[0]) - 1;
    while (st <= end)
    {
        mid = st + (end - st) / 2;
        if (tar < arr[mid])
        {
            end = mid - 1;
        }
        else if (tar > arr[mid])
        {
            st = mid + 1;
        }
        else
        {
            index = mid;
            break;
        }
    }

    if (index != -1)
    {
        cout << index << endl;
    }
    else
    {
        cout << -1 << endl;
    }
    return 0;
}
