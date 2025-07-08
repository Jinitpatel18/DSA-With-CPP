#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int n = 9;
    int lf = 0;
    int rt = n - 1;
    int maxWater = 0;
    while (lf < rt)
    {
        int w = rt - lf;
        int ht = min(arr[lf], arr[rt]);
        int area = w * ht;

        maxWater = max(area, maxWater);
        arr[lf] < arr[rt] ? lf++ : rt--;
    }
    cout << "Maximum water capacity is " << maxWater << endl;
}
