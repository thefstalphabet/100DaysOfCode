class Solution
{
public:
    int threeSumClosest(vector<int> &nums, int target)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int res = INT_MAX / 2;
        // a loop runs from 0 to n-2
        for (int i=0; i<n-2; i++)
        {   
            // two pointers j and k
            int j = i + 1;
            int k = n - 1;
            // a value which stores the sum of 3 elements
            int value = nums[i] + nums[j] + nums[k];
            while (j<k)
            {
                if (abs(value - target) < abs(res - target)) res = value;  
                if (value < target)
                {
                    j++;
                    value = value - nums[j - 1] + nums[j];
                }
                else if (value > target)
                {
                    k--;
                    value = value - nums[k + 1] + nums[k];
                }
                else if (value == target)
                    return target;
            }
        }
        return res;
    }
};