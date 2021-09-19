class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        // a result array to store the elements
        vector<int> res;

        // to store frequency of the element in changed array
        unordered_map<int, int> freq;
        for (int i=0; i<changed.size(); i++){
            freq[changed[i]]++;
        } 
        // did sorting for the changed array
        sort(changed.begin(), changed.end());
        
        // iterating over changed array
        for (int i=0; i<changed.size(); i++){
            int element = changed[i];
            // checking where map has element and their square root
            if(freq[element] && freq[element*2]){
                freq[element]--; // removing the element from map
                freq[element*2]--; // removing the square element from map
                res.push_back(element); // then push that element into ans array
            }
        }
        
        // iterating to map
        for (auto [a, b] : freq)
            // if we found a element withe their apperience
            // it means that element dont have pair then we return empty array 
            if (b) return {};
        
        return res;
    }
};