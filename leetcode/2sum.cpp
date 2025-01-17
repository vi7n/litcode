class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size() - 1; i++)
        {
            // std::cout<< nums.size() << "...  " << i << std::endl;
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    return {i, j};
                }
            }
        }
        return {0, 0};
    }
};

// This code wasn't wotking because of the nums.size thing that I did. nums.size()-i means j will never reach the last element of the vector

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         // std::cout << i;

//         for (int i {0}; i < nums.size();i++){
//             std::cout << i << std::endl;

//             for (int j {i+1}; j<(nums.size()-1);j++)
//             {
//                 std::cout << "j:" << j << std::endl;

//                 if (nums[i]+nums[j] == target)
//                 {
//                     return{i,j};
//                 }
//             }
//         }
//         return{0, 0};
//     }

// };