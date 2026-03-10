#include <iostream>
#include <vector>
using namespace std;

// Check if the array is sorted in non-decreasing order
// Time Complexity: O(n)

bool isSorted(vector<int>& nums)
{
    int n = nums.size();

    for(int i = 0; i < n - 1; i++)
    {
        if(nums[i] > nums[i + 1])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};

    if(isSorted(nums))
        cout << "Array is sorted";
    else
        cout << "Array is not sorted";

    return 0;
}
