// A permutation of an array of integers is an arrangement of its members into a sequence or linear order.

// For example, for arr = [1,2,3], the following are all the permutations of arr: [1,2,3], [1,3,2], [2, 1, 3], [2, 3, 1], [3,1,2], [3,2,1].

class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        int pivot = -1;
        int n = nums.size();
        for (int i = n - 2; i >= 0; i--)
        {
            if (nums[i] < nums[i + 1])
            {
                pivot = i;
                break;
            }
        }

        if (pivot == -1)
        {
            reverse(nums.begin(), nums.end());
            return;
        }

        for (int i = n - 1; i > pivot; i--)
        {
            if (nums[pivot] < nums[i])
            {
                swap(nums[pivot], nums[i]);
                break;
            }
        }

        int i = pivot + 1;
        int j = n - 1;
        while (i <= j)
        {
            swap(nums[i++], nums[j--]);
        }
    }
};