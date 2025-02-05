#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, M;
    cin >> N >> M;

    vector<int> prices(M);
    for (int i = 0; i < M; i++) 
    {
        cin >> prices[i];
    }

    sort(prices.begin(), prices.end());

    int maxProfit = 0;
    int bestPrice = 0;

    for (int i = 0; i < M; i++) 
    {
        int price = prices[i];
        int customers = M - i; 
        int eggsSold = min(N, customers); 
        int profit = price * eggsSold;

        if (profit > maxProfit) 
        {
            maxProfit = profit;
            bestPrice = price;
        }
    }

    cout << bestPrice << " " << maxProfit << '\n';
}
