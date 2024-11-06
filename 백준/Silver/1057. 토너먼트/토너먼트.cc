#include <iostream>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, kim, lim;
    cin >> N >> kim >> lim;
    
    int round = 0;
    
    while (kim != lim) 
    {
        kim = (kim + 1) / 2;
        lim = (lim + 1) / 2;
        round++;
    }
    
    cout << round << '\n';

}
