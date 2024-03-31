#include <iostream>
using namespace std;

int main() 
{
    int total_score = 0;

    for (int i = 0; i < 5; ++i) 
    {
        int score;
        cin >> score;
        total_score += score;
    }

    cout << total_score << endl;

}