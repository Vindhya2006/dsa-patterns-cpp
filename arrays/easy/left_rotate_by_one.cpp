#include <iostream>
#include <vector>
using namespace std;

// Left Rotate Array by One Position
// Time Complexity: O(n)

void rotateArrayByOne(vector<int>& nums)
{
    int n = nums.size();
    
    int temp = nums[0];   // store first element

    for(int i = 1; i < n; i++)
    {
        nums[i - 1] = nums[i];
    }

    nums[n - 1] = temp;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};

    rotateArrayByOne(nums);

    cout << "Array after rotation: ";
    for(int x : nums)
        cout << x << " ";

    return 0;
}
