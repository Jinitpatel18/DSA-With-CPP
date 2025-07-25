#include <iostream>
// #include<string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int len = 0, count = 0;
    string str = "jinit";
    str = "jinitpatel";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            count++;
        }
    }
    cout << count << endl;
}