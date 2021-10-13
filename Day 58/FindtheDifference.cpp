class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> ump;
        for(auto c: t){
            ump[c]++;
        }
        for(auto c: s){
            if(ump.find(c) != ump.end()){
                ump[c]--;
            }
        }
        char ans = ' ';
        for(auto pr: ump){
            if(pr.second==1){
                ans = pr.first;
            }
        }
        return ans;
    }
};