class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans; // to store ans
        // to store original str and shorted str
        unordered_map<string, vector<string>> umap;
        // iterating over array of strs
        for(auto x: strs){
            // x is the curr str
            // s is the curr str
            string s = x;
            // sorting the x str
            sort(x.begin(), x.end());
            // pushing it into umap
            // sorted as first
            // original as second
            umap[x].push_back(s);
        }
        
        // iterating over a umap
        for(auto x : umap){
            // pushing the second string of umap in vector
            ans.push_back(x.second);
        }
        return ans;
        
    }
};