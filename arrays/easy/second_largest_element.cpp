#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Find the second largest element in an array
// Return -1 if it does not exist
// Time Complexity: O(n)

int secondLargestElement(vector<int>& nums)
{
    if(nums.size() < 2)
        return -1;

    int first_max = nums[0];
    int second_max = INT_MIN;

    for(int i = 0; i < nums.size(); i++)
    {
        if(nums[i] > first_max)
        {
            second_max = first_max;
            first_max = nums[i];
        }
        else if(nums[i] < first_max && nums[i] > second_max)
        {
            second_max = nums[i];
        }
    }

    if(second_max == INT_MIN)
        return -1;

    return second_max;
}

int main()
{
    vector<int> nums = {10, 5, 20, 8, 15};

    int result = secondLargestElement(nums);

    cout << "Second Largest Element: " << result;

    return 0;
}
