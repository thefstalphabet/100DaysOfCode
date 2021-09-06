class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = ""; // ans string
        
        if(strs.size()==0){ // if array is empty 
            return ans; //then simple return empty string
        }
        
        // A loop runing from 0 to total number of char in first string element
        for (int i=0; i<strs[0].length(); ++i){
            // a loop runing from the first element of array to n
            for (int j=1; j<strs.size(); j++){
                // checking igf not equal
                if (strs[0][i]!=strs[j][i]){
                    return ans;
                }
            }
            // if it is qequal an adding the character to ans string
            ans += strs[0][i];
        }
        return ans;
        
    }
};