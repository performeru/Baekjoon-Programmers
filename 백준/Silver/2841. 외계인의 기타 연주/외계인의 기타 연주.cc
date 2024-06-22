#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, P;
    cin >> N >> P;

    vector<stack<int>> guitar(7);

    int movements = 0;

    for (int i = 0; i < N; ++i) 
    {
        int stringNum, fret;
        cin >> stringNum >> fret;

        while (!guitar[stringNum].empty() && guitar[stringNum].top() > fret) 
        {
            guitar[stringNum].pop();
            movements++;
        }

        if (guitar[stringNum].empty() || guitar[stringNum].top() != fret) 
        {
            guitar[stringNum].push(fret);
            movements++;
        }
    }

    cout << movements << "\n";

}