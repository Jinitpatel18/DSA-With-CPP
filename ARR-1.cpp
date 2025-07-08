#include <iostream>
#include <limits.h> // For INT_MAX
using namespace std;

int main()
{
    int arr[5] = {-1, 23, 43, 23, 56};
    int largest = INT_MIN;  // Initialize to minimum possible integer value
    int smallest = INT_MAX; // Initialize to maximum possible integer value

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = i;
        }

        if (arr[i] > largest)
        {
            largest = i;
        }
    }
    cout << "Smallest value " << smallest << endl;
    cout << "largest value " << largest;
}