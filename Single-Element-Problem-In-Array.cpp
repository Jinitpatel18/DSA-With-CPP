#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 1, 2, 2, 3, 4, 4};
    int n = 7;
    int index;
    int st = 1, end = n - 2;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (arr[mid - 1] != arr[mid] && arr[mid] != arr[mid + 1])
        {
            index = mid;
            break;
        }

        if (mid % 2 == 0)
        {
            if (arr[mid - 1] == arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }
        else
        {
            if (arr[mid - 1] == arr[mid])
            {
                st = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    cout << arr[index] << endl;
}