#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {-1, 1, 0, -3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> ans;
    int sum = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                sum *= arr[j];
            }
        }
        ans.push_back(sum);
        sum = 1; // Reset sum for the next iteration
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}