class Solution {
public:
    int addDigits(int num) {
        if (num < 10)
            return num;
        int new_num;
        while (num >= 10){
            new_num = 0;
            while (num){
                new_num += num % 10;
                num /= 10;
            }
            num = new_num;
        }
        return num;
    }
};