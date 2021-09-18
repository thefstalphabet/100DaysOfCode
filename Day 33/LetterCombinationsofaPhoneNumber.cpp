class Solution {
public:
    // created recursive function
    vector<string> rec(string &digits, int i, map<int, string> &map) {
        /* 
        1) '&digits' is the refrence of the original string, because we dont 
        need to create another string again and again in 
        the function when recursion call it self.
        2) 'i' is the strting point of the refrence string.
        3) &map is the refrence of the original map which have sored the string
        */
        
        // base case of recursive
        // when i is equal to the size of refrence string
        // then we just return empty vector with empty string
        if(i==digits.size()) return {""};
        
        // when i is not equal to the size of refrence sting
        // then we use recursion
        // this vector store the ans all (sub strings) 
        // coresponding to the i+1 to size of the string part
        vector<string> temp = rec(digits, i+1, map);
        
        // to store the final answer
        vector<string> result;
        
        // now we are appending the first character of refrence sting to the ans
        // converting the digits string char into int to find the string in map
        for ( auto a :  map[digits[i] - '0']){ // iterating the char of string
            for ( auto x: temp){               // iterating the temp
                result.push_back(a+x);         // combining the both string in result vector
            }
        }
        
        // returning the ans to main function
        return result;
        
    }
    
    vector<string> letterCombinations(string digits) { 
        // IN THIS PROBLEM WE ARE USING RECURSION APPOROCH
        // base case
        if(digits.size()==0) return {};
        // map to the string
        map<int, string> map;
        map[2] = "abc";
        map[3] = "def";
        map[4] = "ghi";
        map[5] = "jkl";
        map[6] = "mno";
        map[7] = "pqrs";
        map[8] = "tuv";
        map[9] = "wxyz";
            
        return rec(digits, 0, map);
    }
};