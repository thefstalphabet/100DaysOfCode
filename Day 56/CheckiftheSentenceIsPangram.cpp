// USING MAPS
class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char, int> ump;
        for(auto c: sentence) ump[c] += 1;
        if(ump.size()==26) return true;
        return false;
    }
};