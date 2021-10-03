class Solution {
public:
    // function
    int solve(string s,char ch,int k)
    {
        int i=0;
        int count=0;
        int ans=0;
        for(int j=0; j<s.size(); j++)
        {
            if(ch == s[j])
                count++;
            while(count > k)
            {
                if(s[i++] == ch)
                    count--;
            }
            ans=max(ans,j-i+1);
        }
        return ans;
    }
    
    int maxConsecutiveAnswers(string answerKey, int k) {
        // calling function for T
        int option1=solve(answerKey,'T',k);
        // calling function for F
        int option2=solve(answerKey,'F',k);
        // maximum
        return max(option1,option2);        
    }
};