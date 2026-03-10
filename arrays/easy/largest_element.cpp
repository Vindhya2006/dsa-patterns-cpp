#include <iostream>
#include <vector>
using namespace std;

// Find the largest element in an array
// Time Complexity: O(n)

int largestElement(vector<int>& nums)
{
    int maximum = nums[0];

    for(int i = 1; i < nums.size(); i++)
    {
        if(nums[i] > maximum)
        {
            maximum = nums[i];
        }
    }

    return maximum;
}

int main()
{
    vector<int> nums = {3, 7, 2, 9, 5};

    cout << "Largest Element: " << largestElement(nums);

    return 0;
}t
