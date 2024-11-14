#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    
    vector<int> bl(n);
    
    int start = 0;
    int end = 0;
    
    for(int i = 0; i < n; i++)
    {
        cin >> bl[i];
        start = max(start, bl[i]);  // 블루레이 크기의 최소값은 가장 긴 강의의 길이
        end += bl[i];               // 최대값은 모든 강의를 하나의 블루레이에 담을 때
    }
    
    int result = end;

    while(start <= end)
    {
        int mid = (start + end) / 2;
        int sum = 0;
        int count = 1;

        for(int j = 0; j < n; j++)
        {
            if(sum + bl[j] > mid)
            {
                count++;    
                sum = bl[j];
            }
            else
            {
                sum += bl[j];
            }
        }

        if(count > m) 
        {
            start = mid + 1;
        }
        else      
        {
            result = mid;
            end = mid - 1;
        }
    }
    
    cout << result << '\n';
}
