#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    char arr[7] = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    int n = 7;
    string ans = "";

    for (int i = 0; i < n;)
    {
        int count = 0;
        char current = arr[i];
        while (i < n && arr[i] == current)
        {
            i++;
            count++;
        }

        ans += current;
        if (count > 1)
        {
            ans += to_string(count);
        }
    }
    cout << ans << " ";
}