class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int i = 0, j = 0;
        while(j<typed.length()){
            if(i<name.size() && name[i]==typed[j]){
                i++, j++;
            }
            else if(j>0 && name[i]!=typed[j] && typed[j-1]==typed[j]){
                j++;
            }
            else{
                return false;
            }
        }
        return i == name.size();
    }
};