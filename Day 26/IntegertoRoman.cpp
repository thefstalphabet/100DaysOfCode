class Solution
{
public:
    string intToRoman(int num)
    {   
        // if nums is zero than return empty string
        if (num == 0) return "";

        int numbers[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string romas[] = {"M", "CM", "D", "CD", 
                          "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

        // ans variable
        string ans = "";

        // rining thought the numbers array
        for (int i = 0; i < 13; i++)
        {
            while ((num - numbers[i]) >= 0)
            {
                num = num - numbers[i];
                ans += romas[i];
            }
        }

        return ans;
    }
};