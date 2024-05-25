#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, K;
    cin >> N >> K;

    vector<int> people;
    for (int i = 1; i <= N; ++i) 
    {
        people.push_back(i);
    }

    vector<int> result;
    int index = 0;

    while (!people.empty()) 
    {
        index = (index + K - 1) % people.size();
        result.push_back(people[index]);
        people.erase(people.begin() + index);
    }

    cout << "<";
    
    for (size_t i = 0; i < result.size(); ++i) 
    {
        if (i != 0) 
        {
            cout << ", ";
        }
        cout << result[i];
    }
    
    cout << ">" << "\n";

}