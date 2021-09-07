class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        int count = 0; // count for last word
        for(int i = s.length() - 1; i >= 0; --i)
        {
            if (s[i]==' '){     // if there is space
                if (count > 0){     // if count is greater than zero returning count
                    return count;
                }
            }
            else count++;    // if there is no space count increse
        }  
        return count;
    }
};