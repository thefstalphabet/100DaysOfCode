class Solution {
public:
    vector<int> getRow(int rowIndex) {
        // created a final result array
        vector<vector<int>>res;
        // a loop runs from 0 to 33
        for (int i=0; i<=33; i++)
        {  
            // creted a temp array to inserted inside result array
            vector<int>temp;
            for (int j=0; j<=i; j++)
            {
                if (j==0 || j==i) temp.push_back(1);
                else temp.push_back(res[i-1][j] + res[i-1][j-1]); 
            }
            res.push_back(temp);
            temp.clear();
           }
        return res[rowIndex];
    }
};