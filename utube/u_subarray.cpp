#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};

    int maxSum = INT_MIN;
    for (int st = 0; st < n; st++)
    {
        int currentSum = 0;
        for (int end = st; end < n; end++)
        {
            for (int i = st; i <= end; i++)
            {
                // cout << arr[i];
                currentSum += arr[i];
                maxSum = max(currentSum, maxSum);
            }
            // cout << " ";
        }
        // cout << endl;
    }
    cout << maxSum;

    return 0;
}
