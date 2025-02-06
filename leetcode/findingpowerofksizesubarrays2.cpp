public:
vector<int> resultsArray(vector<int> &nums, int k)
{
    int n = nums.size();
    vector<int> result;
    int point{0}, i{0}, previous{-1}, alo;
    for (i; i < n; i++)
    {
        if (nums[i] != previous + 1)
        {
            point = i;
        }

        alo = i - k + 1;

        if (alo >= 0)
        {
            if (point <= alo)
            {
                result.push_back(nums[i]);
            }
            else
            {
                result.push_back(-1);
            }
        }
        previous = nums[i];
    }
    return result;
}
}
;

sane code but more readable : class Solution
{
public:
    vector<int> resultsArray(vector<int> &nums, int k)
    {
        int n = nums.size();
        vector<int> result;
        int startOfSequence = 0; // Tracks the start of the current consecutive sequence
        for (int i = 0; i < n; ++i)
        {
            // If the current element is not consecutive with the previous one, update startOfSequence
            if (i > 0 && nums[i] != nums[i - 1] + 1)
            {
                startOfSequence = i;
            }

            // Check if the current window is valid
            int windowStart = i - k + 1;
            if (windowStart >= 0)
            {
                // If the start of the sequence is within the current window, it's not a valid consecutive window
                if (startOfSequence <= windowStart)
                {
                    result.push_back(nums[i]);
                }
                else
                {
                    result.push_back(-1);
                }
            }
        }
        return result;
    }
};