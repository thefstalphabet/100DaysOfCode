class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans; // to store ans an vector
        int i = 0; // i refer to numbers[0]
        int j = numbers.size()-1; // size of the array where j is ponited
        while(i<=j){
            if(numbers[i]+numbers[j]>target) j--;
            else if(numbers[i]+numbers[j]<target) i++; 
            else{
                ans.push_back(i+1);
                ans.push_back(j+1);
                break;
            }    
        }
        return ans;
        
    }
};