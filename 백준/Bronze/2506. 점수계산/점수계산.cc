#include <iostream>
#include <vector>

using namespace std;

int calculateScore(vector<int>& results) 
{
    int score = 0;  
    int consecutive_correct = 0;

    for (int result : results) 
    {
        if (result == 1) 
        {  
            consecutive_correct++;
            score += consecutive_correct;
        } 
        else
        { 
            consecutive_correct = 0;
        }
    }

    return score;
}

int main() 
{
    int n; 
    cin >> n;

    vector<int> results(n);  
    for (int i = 0; i < n; ++i)
    {
        cin >> results[i];
    }

    cout << calculateScore(results) << endl;

}