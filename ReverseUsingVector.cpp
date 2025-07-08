#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int reverse(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 0; i < n / 2; i++)
    {
        swap(nums[i], nums[n - i - 1]);
    }
    return 0;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    reverse(nums);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}