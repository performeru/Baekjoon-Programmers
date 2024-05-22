#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;
    
    queue<int> card;
    
    // 카드 초기화
    for(int i = 1; i <= N; i++)
    {
        card.push(i);
    }
    
    // 카드 버리고 아래로 옮기기
    while(card.size() > 1)
    {
        cout << card.front() << " ";
        card.pop();
        
        card.push(card.front());
        card.pop();
    }
    
    cout << card.front() << "\n";
}