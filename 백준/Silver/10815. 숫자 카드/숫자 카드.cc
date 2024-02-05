#include <iostream>
#include <unordered_set>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, M;
    cin >> N;

    unordered_set<int> cards;
    
    for (int i = 0; i < N; i++) 
    {
        int card;
        cin >> card;
        cards.insert(card);
    }

    cin >> M;
    
    for (int i = 0; i < M; i++) 
    {
        int num;
        cin >> num;

        if (cards.find(num) != cards.end()) 
        {
            cout << "1 ";
        }
        else
        {
            cout << "0 ";
        }
    }
}