class Solution {
public:
    string breakPalindrome(string palindrome) {
        // length of string as n
        int n = palindrome.size();
        // when the len of string is less than 2
        if(n<=1) return "";
        // now we know that is palindrome string
        // so we iterate from the middle of the string
        for(int i=0; i<n/2; i++){
            // if the char is not a
            if(palindrome[i]!='a'){
                // then replace it with a char
                palindrome[i] = 'a';
                return palindrome;
            }
        }
        // when all char of string is a
        palindrome[n-1] = 'b';
        return palindrome;
    }
};