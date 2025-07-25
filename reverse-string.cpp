#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string str = "jinit patel";
    reverse(str.begin(), str.end());
    cout << str << endl;
}
// char str[] = {'a','b','c','d','e'};
// int n = 5;
// int i = 0, j = n - 1;
// while(i<j){
//     swap(str[i],str[j]);
//     i++;
//     j--;
// }
// cout<<str<<" ";