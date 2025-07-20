class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {

        unordered_set<char> mySet;
        int left = 0;
        int right = 0;
        int longest = 0;

        while (right < s.length())
        {

            if (!mySet.contains(s[right]))
            {
                mySet.insert(s[right]);
                longest = max(longest, right - left + 1);
            }
            else
            {
                while (mySet.contains(s[right]))
                {
                    mySet.erase(s[left]);
                    left++;
                }
                mySet.insert(s[right]);
            }
            right++;
        }
        return longest;
    }
};