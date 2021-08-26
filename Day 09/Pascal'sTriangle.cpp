class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        // created a final answer array
        vector<vector<int>>res;
        // a loop runs from 0 to numRows
        for (int i=0; i<numRows; i++)
        {  
            // creted a temp array to inserted inside res array
            vector<int>temp;
            for (int j=0; j<=i; j++)
            {
                if (j==0 || j==i) temp.push_back(1);
                else temp.push_back(res[i-1][j] + res[i-1][j-1]); 
            }
            res.push_back(temp);
            temp.clear();
           }
        return res;
        
    }
};
