// class Solution {
// public:
//     int paintWalls(vector<int>& cost, vector<int>& time) {
//     // Create a vector to store cost[i]/time[i] as doubles
//     std::vector<double> ratios(cost.size()); // Initialize with the same size

//     // Compute ratios using a simple loop
//     for (size_t i = 0; i < cost.size(); ++i)
//     {
//         ratios[i] = static_cast<double>(cost[i]) / time[i]; // Avoid integer division
//     }

//     }
// };

#include <vector>
#include <algorithm>
#include <utility> // for std::pair
#include <cmath>

class Solution
{
public:
    int paintWalls(std::vector<int> &cost, std::vector<int> &time)
    {
        std::vector<std::pair<double, int>> ratio_index(cost.size());

        // Compute ratios and store with their indices
        for (size_t i = 0; i < cost.size(); ++i)
        {
            ratio_index[i] = {static_cast<double>(cost[i]) / time[i], i};
        }

        // Sort by ratio
        std::sort(ratio_index.begin(), ratio_index.end(), [](const auto &a, const auto &b)
                  {
                      return a.first < b.first; // Sort in ascending order based on the ratio
                  });

        // Example: Accessing the sorted indices
        // for (const auto& [ratio, index] : ratio_index) {
        // std::cout << "Ratio: " << ratio << ", Index: " << index << '\n';
        // }
        // std::cout << "Ratio at current 2nd index: " << ratio_index[1].first << '\n';
        int sum{0}, rem{0}, totalCost{0}, optimal{0}, skip{0}, old_sum, old_rem, old_totalCost;
        float overhead;
        int n = cost.size() - 1;
        for (int i = 0; i < n; i++)
        {
            old_sum = sum;
            old_rem = rem;
            old_totalCost = totalCost;
            sum += time[ratio_index[i].second];
            // std::cout << sum << '\n';
            rem = n - sum - i;
            totalCost += cost[ratio_index[i].second];
            // std::cout << sum << " cost " << totalCost << '\n';
            if (rem == 0)
                return totalCost;
            if (rem < 1)
            {
                if ((rem == -1) && (old_rem == 1))
                    return totalCost;
                if (old_rem == 1)
                    optimal = -1;
                overhead = (abs(sum) - abs(optimal)) * ratio_index[i].first;
                if (overhead < ratio_index[i + 1].first)
                {
                    return totalCost;
                }
                else
                {
                    old_sum += time[ratio_index[i + 1].second];
                    rem = n - old_sum - i;
                    old_totalCost += cost[ratio_index[i + 1].second];
                    if (old_totalCost < totalCost)
                    {
                        return old_totalCost;
                    }
                    else
                    {
                        return totalCost;
                    }

                    // skip++;
                    // sum = old_sum;
                    // rem = old_rem;
                    // totalCost = old_totalCost;
                }
            }
        }

        return 0;
    }
};
