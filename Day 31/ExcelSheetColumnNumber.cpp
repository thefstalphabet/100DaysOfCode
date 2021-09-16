class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result = 0; // result variable
        int power = 0; // power variable
        // loop is runing from last index of string to 0 index of string
        for(int i = columnTitle.size()-1; i>=0; i--){
            int c = columnTitle[i]; // every char of string
            int value = int(c) - 65 + 1; // finding the sky value of char
            result = result + value*pow(26, power); // 26 is the number of alphabet
            power++; // incrementing power in every index
        }
        return result;
    }
};