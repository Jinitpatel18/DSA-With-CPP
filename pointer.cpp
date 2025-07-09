#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a = 10;
    int *ptr = &a;       // Pointer to the variable a
    cout << ptr << endl; // Address of a
    ptr++;               // Incrementing pointer to point to the next memory location
    cout << ptr << endl; // Address after incrementing
    cout << a << endl;   // Value of a
}

// int main(){
//     int arr[5] = {1, 2, 3, 4, 5};
//     int *ptr = arr; // Pointer to the first element of the array

//     cout<<&arr<<endl; // Address of the array
//     cout<<arr<<endl; // Address of the first element of the array
//     cout<<*arr<<endl; }

// void changeA(int &a) {
//     a = 20;
// }

// int main(){
//     int a = 10;
//     // int* ptr = &a;
//     // int** parPtr = &ptr;

//     // cout<<*(ptr)<<endl;
//     // cout<<**(parPtr)<<endl;
//     // cout<<<<endl;
//     changeA(a);
//     cout<<a<<endl;
// }