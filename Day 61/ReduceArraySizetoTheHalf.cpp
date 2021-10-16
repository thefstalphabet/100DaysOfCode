class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int, int> ump;
        // storing the ele and their freq in map
        for(auto ele: arr) ump[ele]++;
        // vector where we store freq of all ele
        vector<int> vc;
        for(auto pr: ump) vc.push_back(pr.second);
        // sorted the vector 
        sort(vc.begin(),vc.end());
        int ans = 0;
        int sum = 0;
        for(int i=vc.size()-1; i>=0; i--){
            sum+=vc[i];
            ans++;
            if(sum>=arr.size()/2){
                break;
            }
        }
        return ans;
    }
};