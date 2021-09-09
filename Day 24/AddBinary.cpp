class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size()-1; // length of a string
        int j= b.size()-1; // length of b string
        int carry = 0; // to count carry
        string result =""; // to store result
        
        while(i>=0 || j>=0 ){
            int sum = carry; // to store sum of a[i], b[i], carry
            
            // adding the current of a string in sum
            if(i>=0){
                sum += a[i--]-'0';
            }
            // adding the current of b string in sum
            if(j>=0){
                sum += b[j--]-'0';
            }
            
            // if sum is greater than carry then carry is 1
            if(sum>1){
                carry = 1;
            }
            else{
                carry = 0;
            }
            
            result += to_string(sum%2);   
        }
        
        // if carry is 1 then push it to the ans string
        if(carry==1){
            result += to_string(carry);
        } 
        // reversing the string
        reverse(result.begin(), result.end());
        // returning the ans
        return result;
        
    }
};