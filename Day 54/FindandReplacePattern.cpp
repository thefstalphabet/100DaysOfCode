class Solution {
public:
    bool matches(string word, string pattern){
        // when both string size is diff
        if(word.size()!=pattern.size()){
            return false;
        }
        // m1 where we store char mapping
        // m2 where we store mapping char
        map<char, char> map1, map2;
        
        // iterating on word string
        for(int i=0; i<word.size(); i++){
            char pChar = pattern[i];
            char wChar = word[i];
            // pairs of partten to word
            if(map1.find(pChar)==map1.end()){
                map1[pChar] = wChar;
            }
            // pairs of word to pattern
            if(map2.find(wChar)==map2.end()){
                map2[wChar] = pChar;
            }
            
            if(map1.find(pChar) != map1.end() && map1[pChar] != wChar){
                return false;
            }
            if(map2.find(wChar)!=map2.end() && map2[wChar]!=pChar){
                return false;
            }
        
        }
        return true;
    };
    
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        // to store ans
        vector<string> res;
        // iterating on words
        for(int i=0; i<words.size(); i++){
            // calling the function
            // and passing each string of words and pattern string
            if(matches(words[i],pattern)){
                res.push_back(words[i]);
            }
        }
        return res;
    }
};