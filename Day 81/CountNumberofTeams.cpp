// Brute force approach
class Solution {
public:
    int numTeams(vector<int>& rating) {
        int n = rating.size();
        int cnt = 0;
        for(int i=0; i<n-2; i++){
            for(int j=i+1; j<n-1; j++){
                for(int k=j+1; k<n; k++){
                    if(rating[i]<rating[j] && rating[j]<rating[k]){
                        cnt++;
                    }
                    else if(rating[i]>rating[j] &&rating[j]>rating[k]){
                        cnt++;
                    }
                }
            }
        }
        return cnt;
    }
};

// Optimal apparoch
class Solution {
public:
    int numTeams(vector<int>& a) {
        int n = a.size();
        int cnt = 0;
        for(int i=0; i<n; i++){
            int l_smaller = 0;
            int l_greater = 0;
            int r_smaller = 0;
            int r_greater = 0; 
            // loop run from 0 to the i index
            for(int j=0; j<i; j++){
                if(a[j]<a[i]) 
                    l_smaller++;
                else if(a[j]>a[i]) 
                    l_greater++;
            }
            // lop runs from i+1 to n index
            for(int k=i+1;k<n;k++){
                if(a[k]<a[i])
                    r_smaller++;
                else if(a[k]>a[i]) 
                    r_greater++;
            }
            cnt+=(l_smaller*r_greater)+(l_greater*r_smaller);
        }
        return cnt;
    }
};