#include <iostream>
using namespace std;

int main()
{
    int arr[] = {7, 1, 5, 3, 7, 9};
    int n = 6;
    int profit = 0;
    int maxProfit = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            profit = -(arr[i] - arr[j]);
            maxProfit = max(profit, maxProfit);
        }
    }
    cout << "Maxprofit = " << maxProfit << endl;
}