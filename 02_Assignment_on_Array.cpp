#include <iostream>
#include <vector>

using namespace std;

// Time Complexity: O(n)
// Space Complexity: O(1)
int getMaxProfit(vector<int> &prices)
{
    int minPrice = 104;
    int maxProfit = 0;

    for (int i = 0; i < prices.size(); ++i)
    {
        if (prices[i] < minPrice)
        {
            minPrice = prices[i];
        }
        else if (prices[i] - minPrice > maxProfit)
        {
            maxProfit = prices[i] - minPrice;
        }
    }

    return maxProfit;
}

int main()
{

    int n;
    cin >> n;
    vector<int> prices(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> prices[i];
    }

    cout << getMaxProfit(prices);

    return 0;
}
