#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int main()
{
    int arr[] = {3, -4, 5, 4, -1, 7, -8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxSum = INT_MIN;
    int currentSum = 0;

    for (int i = 0; i < n; i++)
    {
        currentSum += arr[i];
        maxSum = max(maxSum, currentSum);
        if (currentSum < 0)
        {
            currentSum = 0;
        }
    }
    cout << "The maximum subarray sum is: " << maxSum << endl;
}