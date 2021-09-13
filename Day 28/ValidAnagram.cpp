class Solution {
public:
    bool isAnagram(string s, string t) {
        // map to store char and their occurance of string s
        unordered_map<char, int> sMap;
        // map to store char and their occurance of string t 
        unordered_map<char, int> tMap; 
        // pushing the char
        for (int i=0; i<s.size(); i++) sMap[s[i]]++;
        // pushing the char
        for (int i=0; i<t.size(); i++) tMap[t[i]]++;
        // checking if it is equal or not
        if(sMap == tMap) return 1;
        // if not returning false
        return 0;
    }
};