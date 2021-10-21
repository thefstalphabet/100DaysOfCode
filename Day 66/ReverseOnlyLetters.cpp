// First apparoach
class Solution {
public:
    string reverseOnlyLetters(string s) {
        int i=0;
        int j=s.size()-1;
        while(i<j){
            if(isalpha(s[i]) && isalpha(s[j])){
                swap(s[i],s[j]);
                i++;
                j--;
            }   
            else if(!isalpha(s[i]) && !isalpha(s[j])){
                i++,j--;
            }   
            else if(!isalpha(s[i])){
                i++;
            }    
            else{
                j--;
            }      
        }
        return s;
    }
};

// Second approach
class Solution {
public:
    string reverseOnlyLetters(string s) {
        string ans = "";
        for(int i = 0; i < s.size(); ++i) {
            if(isalpha(s[i])) ans += s[i];
        }
        reverse(ans.begin(), ans.end());
        for(int i = 0; i < s.size(); ++i) {
            if(!isalpha(s[i])) {
                // i is the index where we found the non alpha char
                // 1 is to add one new space where we insert s[i]
                ans.insert(i, 1, s[i]);
            }  
        }
        return ans;
    }
};