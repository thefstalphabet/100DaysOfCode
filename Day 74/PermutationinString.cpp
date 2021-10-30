class Solution {
public:
	bool checkInclusion(string s1, string s2) {
        // seze of both str
		int n1 = s1.size(), n2 = s2.size();
        
        // stored all char and its freq in m1
		map<char,int> m1;
		for(auto c: s1) m1[c]++;
        
        // iterating to
		for(int i=0; i<=n2-n1; i++){
			map<char,int> m2;
			for(int j=i; j<i+n1; j++) {
                m2[s2[j]]++;
            }
			if(m1==m2) return true;
		}
		return false;
	}
};