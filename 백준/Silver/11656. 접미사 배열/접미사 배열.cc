#include <iostream>
#include <string>
#include <algorithm>
#include <vector> 

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 

    string S;
    vector<string> answer; 

    cin >> S;


    for(int i = 0; i < S.length(); i++)
    {
        answer.push_back(S.substr(i)); 
    }

    sort(answer.begin(), answer.end());

    for(string result : answer)
    {
        cout << result << '\n';
    }

}