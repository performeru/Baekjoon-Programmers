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
    
    queue<int> router;
    
    while (true) 
    {
        int packet;
        cin >> packet;
        
        if (packet == -1)
        { 
            break;
        } 
        else if (packet == 0) 
        { 
            if (!router.empty()) 
            {
                router.pop(); 
            }
        } 
        else
        { 
            if (router.size() < N) 
            {
                router.push(packet);
            }
        }
    }
    
    if (router.empty()) 
    {
        cout << "empty" << '\n';
    }
    else 
    {
        while (!router.empty()) 
        {
            cout << router.front() << " ";
            router.pop();
        }
        cout << '\n';
    }
    
}
