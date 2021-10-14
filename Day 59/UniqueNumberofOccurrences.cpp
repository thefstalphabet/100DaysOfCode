class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> ump;
        set<int> st;
        for(auto ele: arr) ump[ele]++;
        for(auto pr: ump) st.insert(pr.second);
        if(st.size()!=ump.size()) return false;
        return true;
        
    }
};