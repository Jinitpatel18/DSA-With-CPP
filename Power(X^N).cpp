#include <iostream>
#include <vector>
using namespace std;

double myPow(double x, int n)
{
    double sum = 1.0000;
    if (n < 0)
    {
        n = -n;
        x = 1.0 / x;
    }
    for (int i = 0; i < n; i++)
    {
        sum *= x;
    }
    return sum;
}

int main()
{
    double x = 2.00000;
    int n = -2;
    cout << "Result: " << myPow(x, n) << endl;
    return 0;
}