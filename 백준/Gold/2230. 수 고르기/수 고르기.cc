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
    
    vector<int> a(N);
    
    for(int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    
    sort(a.begin(), a.end());
    
    int en = 0;
    int mn = 2'000'000'001;
    
    for(int st = 0; st < N; st++)
    {
        while(en < N && a[en] - a[st] < M)
        {
            en++;
        }
        
        if(en == N)
        {
            break;
        }
        mn = min(mn, a[en] - a[st]);
    }
    cout << mn;
    
}