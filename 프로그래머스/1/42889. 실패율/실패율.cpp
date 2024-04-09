#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, double> a, pair<int, double> b) 
{
    if (a.second == b.second)
    {
        return a.first < b.first;
    }
    return a.second > b.second;
}

vector<int> solution(int N, vector<int> stages) 
{
    vector<int> answer;
    vector<pair<int, double>> failure_rate;

    for (int i = 1; i <= N; ++i) 
    {
        int total_users = 0;
        int failed_users = 0;
        
        for (int stage : stages) 
        {
            if (stage >= i) 
            {
                total_users++;
                if (stage == i)
                {
                    failed_users++;
                }
            }
        }
        
        double rate = (total_users == 0) ? 0 : (double)failed_users / total_users;
        failure_rate.push_back({i, rate});
    }

    sort(failure_rate.begin(), failure_rate.end(), compare);

    for (auto p : failure_rate) 
    {
        answer.push_back(p.first);
    }

    return answer;
}