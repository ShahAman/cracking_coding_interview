#include <iostream>
#include <vector>

using namespace std;

// Time Complexity: O(n)
// Space Complexity: O(1)
vector<int> merge_new(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    vector<int> merged(m + n);
    int p1 = m - 1;
    int p2 = n - 1;
    int p = m + n - 1;

    while (p1 >= 0 && p2 >= 0)
    {
        if (nums1[p1] > nums2[p2])
        {
            merged[p] = nums1[p1];
            p1--;
        }
        else
        {
            merged[p] = nums2[p2];
            p2--;
        }
        p--;
    }

    while (p2 >= 0)
    {
        merged[p] = nums2[p2];
        p2--;
        p--;
    }

    while (p1 >= 0)
    {
        merged[p] = nums1[p1];
        p1--;
        p--;
    }

    return merged;
}