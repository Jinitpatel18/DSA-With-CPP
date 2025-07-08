#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr;

    arr.push_back(10); // Add elements to the vector
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(30);
    arr.push_back(30); 

    // arr.pop_back(); // Remove the last element from the vector

    cout << "Size = " << arr.size() << endl; // Output the size of the vector
    cout<< "Capacity of vector ="<<arr.capacity()<<endl;
    // cout << arr.front() << endl; // Output the first element of the vector
    // cout << arr.back() << endl; // Output the last element of the vector
    // cout<<arr.at(1)<<endl; // Output the element at index 1
    for (int val : arr) // For each loop to iterate through the vector
    {
        cout << val << " ";
    }
}