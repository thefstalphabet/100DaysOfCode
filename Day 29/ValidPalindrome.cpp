class Solution {
public:
    bool isPalindrome(string s) {
        
        string validchars;
        for (int i = 0; i < s.length(); i++) {
            if (isalnum(s[i]))
                ss += tolower(s[i]);
        }
        int i = 0; // starting of of valid char string
        int j = validchars.length()-1; // ending of of valid char string
        
        while (i < j) {
            if (validchars[i] != validchars[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};