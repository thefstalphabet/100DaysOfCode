// BRUTE FORCE APPOROCH WITH TWO LOOPS
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int ans = 0;
        for(int i=0; i<jewels.size(); i++){
            for(int j=0; j<stones.size(); j++){
                if(jewels[i]==stones[j])
                    ans+=1;
            }
        }
        return ans;
    }
};

// SOLVING THE QUESTION WITH HASH MAP
class Solution {
public:
    int numJewelsInStones(string jewel, string stones) {
        unordered_set<char> map(jewel.begin(), jewel.end());
        int ans = 0;
        for (char s : stones)
            if (map.find(s) != map.end()) ans++;
        return ans;
    }
};