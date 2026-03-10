#include <iostream>
#include <vector>
using namespace std;

// Linear Search in an Array
// Returns index of target element, otherwise -1
// Time Complexity: O(n)

int linearSearch(vector<int>& nums, int target)
{
    int n = nums.size();

    for(int i = 0; i < n; i++)
    {
        if(nums[i] == target)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    vector<int> nums = {4, 7, 1, 9, 3};
    int target = 9;

    int index = linearSearch(nums, target);

    if(index != -1)
        cout << "Element found at index: " << index;
    else
        cout << "Element not found";

    return 0;
}
