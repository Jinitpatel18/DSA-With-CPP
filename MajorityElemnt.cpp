#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = 0;
    for (int val : arr)
    {
        int freq = 0;
        for (int element : arr)
        {
            if (element == val)
            {
                freq++;
            }
        }
        if (freq > n / 2)
        {
            cout << "Majority Element: " << val << endl;
            return 0;
        }
    }
    return -1;
}