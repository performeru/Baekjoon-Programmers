#include <iostream>
#include <algorithm>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, M;
    cin >> N >> M;

    int minPackage = 1000;
    int minSingle = 1000; 

    for (int i = 0; i < M; ++i) 
    {
        int packagePrice, singlePrice;
        cin >> packagePrice >> singlePrice;
        minPackage = min(minPackage, packagePrice);
        minSingle = min(minSingle, singlePrice);
    }

    int costByPackages = (N / 6 + (N % 6 != 0)) * minPackage;

    int costBySingles = N * minSingle;

    int costMixed = (N / 6) * minPackage + (N % 6) * minSingle;

    int minCost = min({costByPackages, costBySingles, costMixed});

    cout << minCost << '\n';

}
