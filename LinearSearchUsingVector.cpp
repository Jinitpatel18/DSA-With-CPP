#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int linearSearch(vector<int> arr, int target)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {21, 23, 45, 6, 8, 9};
    int target = 2;
    int result = linearSearch(arr, target);
    cout << "Element found at index: " << result << endl;
    return 0;
}