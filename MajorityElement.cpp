#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 3, 3, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int freq = 0;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (freq == 0)
        {
            ans = arr[i];
        }
        if (ans == arr[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }
    cout << "The majority element is: " << ans << endl;
}
