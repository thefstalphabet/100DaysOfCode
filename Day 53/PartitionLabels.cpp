class Solution {
public:
    vector<int> partitionLabels(string s) {
        // array which store the len of seprated strings
        vector<int> vec;
        // map which stores the char and their last accurance
        unordered_map<char,int> m;
        // storing the char in map and their last accurance
        for(int i=0; i<s.size(); i++){
          m[s[i]]=i;  
        }
        int maxi = 0;
        int prev = -1;
        for(int i=0; i<s.size(); i++){
            maxi = max(maxi,m[s[i]]);
            if(maxi == i){
                vec.push_back(i-prev);
                prev=i;
            }  
        }
        
        return vec;
    }
};