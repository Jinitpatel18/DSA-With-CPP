#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {0, 3, 8, 9, 10, 2};
    int n = 6;
    int index;
    int st = 1, end = n - 2;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (arr[mid] < arr[mid + 1])
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1])
        {
            index = mid;
            break;
        }
    }
    cout << arr[index] << endl;
}