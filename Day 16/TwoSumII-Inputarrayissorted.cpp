#include <vector>
using namespace std;
vector<int> numbers {2, 7, 11, 15};
int target = 9;
int n = numbers.size() - 1;
vector<int> answer;

for (int i = 0; i <= n; i++)
{
    for (int j = i + 1; j <= n; i++)
    {
        if (numbers[i] + numbers[j] == target)
        {
            answer.push_back(i + 1);
            answer.push_back(j + 1);
        }
    }
}