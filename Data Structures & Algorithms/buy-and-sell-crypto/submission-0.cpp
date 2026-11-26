class Solution {
public:
	int maxProfit(vector<int>& prices) {
		int min_price = INT_MAX;
		int max_profit = 0;
		for (int a : prices)
		{
			if (a < min_price)
			{
				min_price = a;
			}
			else if (a - min_price > max_profit)
			{
				max_profit = a - min_price;
			}
		}
		return max_profit;
	}
};