#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Time Complexity: O(n log n)
// Space Complexity: O(n)
int maxDisjointIntervals(vector<vector<int>> &intervals)
{
    int n = intervals.size();
    if (n == 0)
        return 0;

    sort(intervals.begin(), intervals.end(), [](vector<int> &a, vector<int> &b)
         { return a[1] < b[1]; });

    int count = 1;
    int endpoint = intervals[0][1];

    for (int i = 1; i < n; ++i)
    {
        if (intervals[i][0] > endpoint)
        {
            count++;
            endpoint = intervals[i][1];
        }
    }

    return count;
}