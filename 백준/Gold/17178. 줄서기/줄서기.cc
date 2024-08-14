#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

bool compareTickets(const string& t1, const string& t2) 
{
    char alpha1 = t1[0];
    char alpha2 = t2[0];
    
    int num1 = stoi(t1.substr(2));
    int num2 = stoi(t2.substr(2));
    
    if (alpha1 == alpha2)
    {
        return num1 < num2;
    }
    return alpha1 < alpha2;
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;

    vector<string> correctOrder;
    vector<queue<string>> lines(N);

    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < 5; j++) 
        {
            string ticket;
            cin >> ticket;
            lines[i].push(ticket);
            correctOrder.push_back(ticket);
        }
    }

    sort(correctOrder.begin(), correctOrder.end(), compareTickets);

    stack<string> waitingArea;
    int currentIndex = 0;

    for (int i = 0; i < N; i++) 
    {
        while (!lines[i].empty()) 
        {
            string currentTicket = lines[i].front();
            lines[i].pop();

            while (!waitingArea.empty() && waitingArea.top() == correctOrder[currentIndex]) 
            {
                currentIndex++;
                waitingArea.pop();
            }

            if (currentTicket == correctOrder[currentIndex]) 
            {
                currentIndex++;
            } 
            else 
            {
                waitingArea.push(currentTicket);
            }
        }
    }

    while (!waitingArea.empty() && waitingArea.top() == correctOrder[currentIndex]) 
    {
        currentIndex++;
        waitingArea.pop();
    }

    if (currentIndex == correctOrder.size()) 
    {
        cout << "GOOD" << "\n";
    } 
    else 
    {
        cout << "BAD" << "\n";
    }

}