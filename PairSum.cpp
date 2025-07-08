#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[] = {2,7,11,15};
    vector<int> ans;
    int target = 9;
    int n = 4;
    int i=0, j=n-1;
    while(i<j){
        int pairsum = 0;
        pairsum = arr[i] + arr[j];
        if(pairsum == target){
            ans.push_back(i);
            ans.push_back(j);
            break;
        }if(pairsum<target){
            i++;
        }else{
            j--;
        }
    }
    for(int nums:ans){
        cout << nums << " ";
    }
}