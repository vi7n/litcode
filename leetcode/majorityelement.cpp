// cout std sanga kasari grne ho birsey
// if ma () halna birse
// return thau ma lekhina
// size use grnai ayena -- size ra sizeof ko difference bujhne

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int n = nums.size();
        int freq{1};
        int a{nums[0]};
        for (int i = 1; i < n; i++)
        {
            if (freq == 0)
            {
                a = nums[i];
            }
            if (nums[i] == a)
            {
                freq += 1;
            }
            else
            {
                freq -= 1;
            }
        }
        return a;
    }
};