// beats 100%

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int start{0}, mid, end;
        end = nums.size() - 1;
        // std::cout<<end<<std::endl;

        while (start <= end)
        {
            mid = start + ((end - start) / 2);
            if (nums[mid] == target)
            {
                return mid;
            }

            if (nums[start] < nums[mid])
            {
                if (nums[start] == target)
                {
                    return start;
                }

                if (nums[start] <= target && target <= nums[mid])
                {
                    end = mid - 1;
                }
                else
                {
                    start = mid + 1;
                }
            }
            else
            {
                if (nums[end] == target)
                {
                    return end;
                }
                if (nums[mid] < target && target < nums[end])
                {
                    start = mid + 1;
                }
                else
                {
                    end = mid - 1;
                }
            }
        }

        return -1;
    }
};