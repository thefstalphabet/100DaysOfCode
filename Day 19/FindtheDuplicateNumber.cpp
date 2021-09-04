class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size(); // size of the array
        for(int i=0; i<n; i++)
        {   
            // converting the element in negative
            int ele = abs(nums[i])-1;
            // checking if element is marked before
            if(nums[ele] < 0)
                // yes then return the element
                return ele+1;
            // converting the element in negative
            nums[ele] = -nums[ele];
        }
        return 0;
    }
};