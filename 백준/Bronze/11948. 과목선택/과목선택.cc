#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
    vector<int> scores(6);

    for (int i = 0; i < 6; ++i) 
    {
        cin >> scores[i];
    }

    sort(scores.begin(), scores.begin() + 4); 
    int total1 = scores[1] + scores[2] + scores[3]; 

    sort(scores.begin() + 4, scores.end()); 
    int total2 = scores[5]; 

    cout << total1 + total2 << endl;

}