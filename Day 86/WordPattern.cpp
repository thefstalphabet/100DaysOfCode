class Solution {
public:
    bool wordPattern(string pattern, string s) {
        // vector where we store every word in s string
        vector<string> words;
        // pushing extra space in s string
        s.push_back(' ');
        string currStr = "";
        for(auto ch: s){
            if(ch != ' ') 
                currStr.push_back(ch);
            else{
                words.push_back(currStr);
                currStr.clear();
            }
        }
        // when the size are diffrent
        if(pattern.size()!=words.size()) return false;
        unordered_map<char,string> ump1;
        unordered_map<string,char> ump2;
        for(int i=0; i<pattern.size(); i++){
            if(ump1.find(pattern[i])==ump1.end() && ump2.find(words[i])==ump2.end()){
                ump1[pattern[i]]=words[i];
                ump2[words[i]]=pattern[i];
            }
            else if(words[i]!=ump1[pattern[i]] || pattern[i]!=ump2[words[i]]){
                return false;
            }
        }
        return true;
    }
};