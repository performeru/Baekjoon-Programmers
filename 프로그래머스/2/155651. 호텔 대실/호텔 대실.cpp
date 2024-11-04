#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int timeToMinutes(const string& time) 
{
    int hour = stoi(time.substr(0, 2));
    int minute = stoi(time.substr(3, 2));
    return hour * 60 + minute;
}

int solution(vector<vector<string>> book_time) 
{
    vector<pair<int, int>> times;
    for (const auto& booking : book_time) 
    {
        int start = timeToMinutes(booking[0]);
        int end = timeToMinutes(booking[1]) + 10; 
        times.emplace_back(start, end);
    }

    sort(times.begin(), times.end(), [](const pair<int, int>& a, const pair<int, int>& b) 
    {
        return a.first < b.first; 
    });

    vector<int> rooms; 

    for (const auto& time : times) 
    {
        int start = time.first;
        int end = time.second;
        
        bool foundRoom = false;
        for (auto& roomEnd : rooms) 
        {
            if (roomEnd <= start) 
            {
                roomEnd = end; 
                foundRoom = true;
                break;
            }
        }
        
        if (!foundRoom) 
        {
            rooms.push_back(end);
        }
    }

    return rooms.size(); 
}