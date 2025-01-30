#include <iostream>
#include <vector>
using namespace std;

// kadane algorith is a kind of dynamic programming algo aka converting a big problem into smaller problem.
//  time complexity O(n)

int main()
{

    int arr[5] = {-1, -2, -3, -4, -15};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxSum = INT_MIN;
    int currentSum = 0;
    for (int i = 0; i < n; i++)
    {
        currentSum += arr[i];
        maxSum = max(maxSum, currentSum);
        if (currentSum < 0)
        {
            currentSum = 0;
        }
    }
    cout << maxSum;

    return 0;
}
